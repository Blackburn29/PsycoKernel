cmd_arch/arm/lib/clear_user.o := /mnt/android/M8Kernel/PsycoKernel/scripts/gcc-wrapper.py /mnt/android/toolchains/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/lib/.clear_user.o.d  -nostdinc -isystem /mnt/android/toolchains/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/mnt/android/M8Kernel/PsycoKernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /mnt/android/M8Kernel/PsycoKernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15  -include asm/unified.h -msoft-float -gdwarf-2       -mcpu=cortex-a15 -mtune=cortex-a15 -mfpu=neon-vfpv4 -ffast-math -ftree-vectorize -pipe -c -o arch/arm/lib/clear_user.o arch/arm/lib/clear_user.S

source_arch/arm/lib/clear_user.o := arch/arm/lib/clear_user.S

deps_arch/arm/lib/clear_user.o := \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  include/linux/linkage.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/linkage.h \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/assembler.h \
    $(wildcard include/config/cpu/feroceon.h) \
    $(wildcard include/config/trace/irqflags.h) \
    $(wildcard include/config/smp.h) \
    $(wildcard include/config/cpu/use/domains.h) \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/ptrace.h \
    $(wildcard include/config/cpu/endian/be8.h) \
    $(wildcard include/config/arm/thumb.h) \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/hwcap.h \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/domain.h \
    $(wildcard include/config/io/36.h) \
    $(wildcard include/config/verify/permission/fault.h) \

arch/arm/lib/clear_user.o: $(deps_arch/arm/lib/clear_user.o)

$(deps_arch/arm/lib/clear_user.o):
