/*
 * linux/arch/unicore32/kernel/sys.c
 *
 * Code specific to PKUnity SoC and UniCore ISA
 *
 * Copyright (C) 2001-2010 GUAN Xue-tao
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/module.h>
#include <linux/errno.h>
#include <linux/sched.h>
#include <linux/slab.h>
#include <linux/mm.h>
#include <linux/sem.h>
#include <linux/msg.h>
#include <linux/shm.h>
#include <linux/stat.h>
#include <linux/syscalls.h>
#include <linux/mman.h>
#include <linux/fs.h>
#include <linux/file.h>
#include <linux/ipc.h>
#include <linux/uaccess.h>

#include <asm/syscalls.h>
#include <asm/cacheflush.h>

asmlinkage long __sys_clone(unsigned long clone_flags, unsigned long newsp,
			 void __user *parent_tid, void __user *child_tid,
			 struct pt_regs *regs)
{
	if (!newsp)
		newsp = regs->UCreg_sp;

	return do_fork(clone_flags, newsp, regs, 0,
			parent_tid, child_tid);
}

asmlinkage long __sys_execve(const char __user *filename,
			  const char __user *const __user *argv,
			  const char __user *const __user *envp,
			  struct pt_regs *regs)
{
	int error;
	char *fn;

	fn = getname(filename);
	error = PTR_ERR(fn);
	if (IS_ERR(fn))
		goto out;
	error = do_execve(fn, argv, envp, regs);
	putname(fn);
out:
	return error;
}

int kernel_execve(const char *filename,
		  const char *const argv[],
		  const char *const envp[])
{
	struct pt_regs regs;
	int ret;

	memset(&regs, 0, sizeof(struct pt_regs));
	ret = do_execve(filename,
			(const char __user *const __user *)argv,
			(const char __user *const __user *)envp, &regs);
	if (ret < 0)
		goto out;

	regs.UCreg_00 = ret;

	asm("add	r0, %0, %1\n\t"
		"mov	r1, %2\n\t"
		"mov	r2, %3\n\t"
		"mov	r22, #0\n\t"	
		"mov	r23, %0\n\t"	
		"b.l	memmove\n\t"	
		"mov	sp, r0\n\t"	
		"b	ret_to_user"
		:
		: "r" (current_thread_info()),
		  "Ir" (THREAD_START_SP - sizeof(regs)),
		  "r" (&regs),
		  "Ir" (sizeof(regs))
		: "r0", "r1", "r2", "r3", "ip", "lr", "memory");

 out:
	return ret;
}
EXPORT_SYMBOL(kernel_execve);

SYSCALL_DEFINE6(mmap2, unsigned long, addr, unsigned long, len,
		unsigned long, prot, unsigned long, flags,
		unsigned long, fd, unsigned long, off_4k)
{
	return sys_mmap_pgoff(addr, len, prot, flags, fd,
			      off_4k);
}

#undef __SYSCALL
#define __SYSCALL(nr, call)	[nr] = (call),

void *sys_call_table[__NR_syscalls] = {
	[0 ... __NR_syscalls-1] = sys_ni_syscall,
#include <asm/unistd.h>
};
