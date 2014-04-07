cmd_arch/arm/mvp/commkm/check_kconfig.o := /mnt/android/M8Kernel/PsycoKernel/scripts/gcc-wrapper.py /mnt/android/toolchains/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mvp/commkm/.check_kconfig.o.d  -nostdinc -isystem /mnt/android/toolchains/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/mnt/android/M8Kernel/PsycoKernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /mnt/android/M8Kernel/PsycoKernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -finline-functions -fgcse-after-reload -ftree-partial-pre -fipa-cp-clone -mcpu=cortex-a15 -mtune=cortex-a15 -mfpu=neon-vfpv4 -ftree-vectorize -pipe -fno-delete-null-pointer-checks -funswitch-loops -fpredictive-commoning -marm -mfloat-abi=softfp -funsafe-math-optimizations -funroll-loops -mvectorize-with-neon-quad -fgraphite-identity -floop-block -ftree-loop-linear -floop-strip-mine -ftree-loop-distribution -fmodulo-sched -fmodulo-sched-allow-regmoves -Os -Wno-maybe-uninitialized -marm -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15 -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO -fno-pic -fno-dwarf2-cfi-asm -D__linux__ -DCOMM_BUILDING_SERVER -mfpu=neon -DIN_MODULE -DGPLED_CODE --std=gnu89 -O2 -g2 -ggdb -mapcs -fno-optimize-sibling-calls -mno-sched-prolog  -DMODULE  -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(check_kconfig)"  -D"KBUILD_MODNAME=KBUILD_STR(commkm)" -c -o arch/arm/mvp/commkm/.tmp_check_kconfig.o arch/arm/mvp/commkm/check_kconfig.c

source_arch/arm/mvp/commkm/check_kconfig.o := arch/arm/mvp/commkm/check_kconfig.c

deps_arch/arm/mvp/commkm/check_kconfig.o := \
    $(wildcard include/config/modules.h) \
    $(wildcard include/config/module/unload.h) \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/namespaces.h) \
    $(wildcard include/config/net/ns.h) \
    $(wildcard include/config/inet.h) \
    $(wildcard include/config/ipv6.h) \
    $(wildcard include/config/tun.h) \
    $(wildcard include/config/netfilter.h) \
    $(wildcard include/config/ikconfig.h) \
    $(wildcard include/config/ikconfig/proc.h) \
    $(wildcard include/config/proc.h) \
    $(wildcard include/config/migration.h) \
    $(wildcard include/config/numa.h) \
    $(wildcard include/config/cpusets.h) \
    $(wildcard include/config/memory/failure.h) \
    $(wildcard include/config/memory/hotplug.h) \
    $(wildcard include/config/compaction.h) \
  include/linux/version.h \

arch/arm/mvp/commkm/check_kconfig.o: $(deps_arch/arm/mvp/commkm/check_kconfig.o)

$(deps_arch/arm/mvp/commkm/check_kconfig.o):
