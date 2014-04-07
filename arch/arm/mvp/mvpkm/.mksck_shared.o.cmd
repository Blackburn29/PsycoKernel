cmd_arch/arm/mvp/mvpkm/mksck_shared.o := /mnt/android/M8Kernel/PsycoKernel/scripts/gcc-wrapper.py /mnt/android/toolchains/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mvp/mvpkm/.mksck_shared.o.d  -nostdinc -isystem /mnt/android/toolchains/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/mnt/android/M8Kernel/PsycoKernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /mnt/android/M8Kernel/PsycoKernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -finline-functions -fgcse-after-reload -ftree-partial-pre -fipa-cp-clone -mcpu=cortex-a15 -mtune=cortex-a15 -mfpu=neon-vfpv4 -ftree-vectorize -pipe -fno-delete-null-pointer-checks -funswitch-loops -fpredictive-commoning -marm -mfloat-abi=softfp -funsafe-math-optimizations -funroll-loops -mvectorize-with-neon-quad -fgraphite-identity -floop-block -ftree-loop-linear -floop-strip-mine -ftree-loop-distribution -fmodulo-sched -fmodulo-sched-allow-regmoves -Os -Wno-maybe-uninitialized -marm -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15 -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -fno-pic -fno-dwarf2-cfi-asm -D__linux__ -mfpu=neon -DLIB_ARM_VERSION=7 -DIN_MODULE -DGPLED_CODE --std=gnu89 -O2 -g2 -ggdb -mapcs -fno-optimize-sibling-calls -mno-sched-prolog -DLOWMEMKILLER_VARIANT=8 -DLOWMEMKILLER_SHRINK_MD5=1181723027468abcda0e1cba6bcfa6a8 -DLOWMEMKILLER_MD5=22d302653e59fe4226f2b0497bdce26d  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(mksck_shared)"  -D"KBUILD_MODNAME=KBUILD_STR(mvpkm)" -c -o arch/arm/mvp/mvpkm/.tmp_mksck_shared.o arch/arm/mvp/mvpkm/mksck_shared.c

source_arch/arm/mvp/mvpkm/mksck_shared.o := arch/arm/mvp/mvpkm/mksck_shared.c

deps_arch/arm/mvp/mvpkm/mksck_shared.o := \
  arch/arm/mvp/mvpkm/mvp.h \
  arch/arm/mvp/mvpkm/include_check.h \
  arch/arm/mvp/mvpkm/mvp_compiler.h \
  arch/arm/mvp/mvpkm/mvp_compiler_gcc.h \
  arch/arm/mvp/mvpkm/utils.h \
  /mnt/android/toolchains/arm-eabi-4.8/lib/gcc/arm-eabi/4.8/include/stddef.h \
  /mnt/android/toolchains/arm-eabi-4.8/lib/gcc/arm-eabi/4.8/include/stdbool.h \
  arch/arm/mvp/mvpkm/mvp_assert.h \
  arch/arm/mvp/mvpkm/fatalerror.h \
  arch/arm/mvp/mvpkm/nottested.h \
  arch/arm/mvp/mvpkm/mvp_types.h \
  arch/arm/mvp/mvpkm/platdefx.h \
  arch/arm/mvp/mvpkm/mksck_shared.h \
  arch/arm/mvp/mvpkm/atomic.h \
  arch/arm/mvp/mvpkm/atomic_arm.h \
  arch/arm/mvp/mvpkm/mksck.h \
  arch/arm/mvp/mvpkm/vmid.h \
  arch/arm/mvp/mvpkm/mmu_defs.h \
  arch/arm/mvp/mvpkm/mutex.h \
  arch/arm/mvp/mvpkm/arm_inline.h \
  arch/arm/mvp/mvpkm/arm_types.h \
  arch/arm/mvp/mvpkm/exc_types.h \
  arch/arm/mvp/mvpkm/mmu_types.h \
  arch/arm/mvp/mvpkm/lpae_types.h \
  arch/arm/mvp/mvpkm/lpae_defs.h \
  arch/arm/mvp/mvpkm/arm_defs.h \
  arch/arm/mvp/mvpkm/coproc_defs.h \
  arch/arm/mvp/mvpkm/exc_defs.h \
  arch/arm/mvp/mvpkm/instr_defs.h \
  arch/arm/mvp/mvpkm/ve_defs.h \
  arch/arm/mvp/mvpkm/psr_defs.h \
  arch/arm/mvp/mvpkm/arm_gcc_inline.h \

arch/arm/mvp/mvpkm/mksck_shared.o: $(deps_arch/arm/mvp/mvpkm/mksck_shared.o)

$(deps_arch/arm/mvp/mvpkm/mksck_shared.o):
