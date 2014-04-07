cmd_drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.o := /mnt/android/M8Kernel/PsycoKernel/scripts/gcc-wrapper.py /mnt/android/toolchains/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,drivers/media/platform/msm/camera_v2/yushanII/.ilp0100_customer_iqsettings.o.d  -nostdinc -isystem /mnt/android/toolchains/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/mnt/android/M8Kernel/PsycoKernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /mnt/android/M8Kernel/PsycoKernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -finline-functions -fgcse-after-reload -ftree-partial-pre -fipa-cp-clone -mcpu=cortex-a15 -mtune=cortex-a15 -mfpu=neon-vfpv4 -ftree-vectorize -pipe -fno-delete-null-pointer-checks -funswitch-loops -fpredictive-commoning -marm -mfloat-abi=softfp -funsafe-math-optimizations -funroll-loops -mvectorize-with-neon-quad -fgraphite-identity -floop-block -ftree-loop-linear -floop-strip-mine -ftree-loop-distribution -fmodulo-sched -fmodulo-sched-allow-regmoves -Os -Wno-maybe-uninitialized -marm -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15 -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -Idrivers/media/platform/msm/camera_v2/sensor -Idrivers/media/platform/msm/camera_v2/sensor/io -Idrivers/media/platform/msm/camera_v2    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(ilp0100_customer_iqsettings)"  -D"KBUILD_MODNAME=KBUILD_STR(ilp0100_customer_iqsettings)" -c -o drivers/media/platform/msm/camera_v2/yushanII/.tmp_ilp0100_customer_iqsettings.o drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.c

source_drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.o := drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.c

deps_drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.o := \
  drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iq_settings.h \
  drivers/media/platform/msm/camera_v2/yushanII/ilp0100_ST_definitions.h \
  include/linux/types.h \
    $(wildcard include/config/uid16.h) \
    $(wildcard include/config/lbdaf.h) \
    $(wildcard include/config/arch/dma/addr/t/64bit.h) \
    $(wildcard include/config/phys/addr/t/64bit.h) \
    $(wildcard include/config/64bit.h) \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/types.h \
  include/asm-generic/int-ll64.h \
  arch/arm/include/generated/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/linux/posix_types.h \
  include/linux/stddef.h \
  include/linux/compiler.h \
    $(wildcard include/config/sparse/rcu/pointer.h) \
    $(wildcard include/config/trace/branch/profiling.h) \
    $(wildcard include/config/profile/all/branches.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/enable/warn/deprecated.h) \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/arch/supports/optimized/inlining.h) \
    $(wildcard include/config/optimize/inlining.h) \
  include/linux/compiler-gcc4.h \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/posix_types.h \
  include/asm-generic/posix_types.h \
  drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_platform_types.h \

drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.o: $(deps_drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.o)

$(deps_drivers/media/platform/msm/camera_v2/yushanII/ilp0100_customer_iqsettings.o):
