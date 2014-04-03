cmd_arch/arm/mach-msm/bms-batterydata-oem.o := /mnt/android/M8Kernel/M8_ATT/scripts/gcc-wrapper.py /mnt/android/toolchains/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mach-msm/.bms-batterydata-oem.o.d  -nostdinc -isystem /mnt/android/toolchains/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/mnt/android/M8Kernel/M8_ATT/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /mnt/android/M8Kernel/M8_ATT/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -fno-delete-null-pointer-checks -Os -Wno-maybe-uninitialized -marm -fno-dwarf2-cfi-asm -fstack-protector -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15 -msoft-float -Uarm -Wframe-larger-than=1024 -Wno-unused-but-set-variable -fomit-frame-pointer -g -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -DCC_HAVE_ASM_GOTO    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(bms_batterydata_oem)"  -D"KBUILD_MODNAME=KBUILD_STR(bms_batterydata_oem)" -c -o arch/arm/mach-msm/.tmp_bms-batterydata-oem.o arch/arm/mach-msm/bms-batterydata-oem.c

source_arch/arm/mach-msm/bms-batterydata-oem.o := arch/arm/mach-msm/bms-batterydata-oem.c

deps_arch/arm/mach-msm/bms-batterydata-oem.o := \
  include/linux/batterydata-lib.h \
    $(wildcard include/config/pm8921/bms.h) \
    $(wildcard include/config/qpnp/bms.h) \
  include/linux/errno.h \
  arch/arm/include/generated/asm/errno.h \
  include/asm-generic/errno.h \
  include/asm-generic/errno-base.h \

arch/arm/mach-msm/bms-batterydata-oem.o: $(deps_arch/arm/mach-msm/bms-batterydata-oem.o)

$(deps_arch/arm/mach-msm/bms-batterydata-oem.o):
