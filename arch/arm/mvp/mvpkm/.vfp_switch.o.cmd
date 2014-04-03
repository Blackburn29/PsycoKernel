cmd_arch/arm/mvp/mvpkm/vfp_switch.o := /mnt/android/M8Kernel/M8_ATT/scripts/gcc-wrapper.py /mnt/android/toolchains/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mvp/mvpkm/.vfp_switch.o.d  -nostdinc -isystem /mnt/android/toolchains/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/mnt/android/M8Kernel/M8_ATT/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /mnt/android/M8Kernel/M8_ATT/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15  -include asm/unified.h -msoft-float -gdwarf-2     -mfpu=neon -DLIB_ARM_VERSION=7 -DIN_MODULE -DGPLED_CODE -mfloat-abi=softfp   -DMODULE  -c -o arch/arm/mvp/mvpkm/vfp_switch.o arch/arm/mvp/mvpkm/vfp_switch.S

source_arch/arm/mvp/mvpkm/vfp_switch.o := arch/arm/mvp/mvpkm/vfp_switch.S

deps_arch/arm/mvp/mvpkm/vfp_switch.o := \
  /mnt/android/M8Kernel/M8_ATT/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \
  arch/arm/mvp/mvpkm/arm_defs.h \
  arch/arm/mvp/mvpkm/include_check.h \
  arch/arm/mvp/mvpkm/coproc_defs.h \
  arch/arm/mvp/mvpkm/exc_defs.h \
  arch/arm/mvp/mvpkm/instr_defs.h \
  arch/arm/mvp/mvpkm/utils.h \
  arch/arm/mvp/mvpkm/mmu_defs.h \
  arch/arm/mvp/mvpkm/lpae_defs.h \
  arch/arm/mvp/mvpkm/ve_defs.h \
  arch/arm/mvp/mvpkm/psr_defs.h \
  arch/arm/mvp/mvpkm/platdefx.h \
  arch/arm/mvp/mvpkm/arm_as_macros.h \

arch/arm/mvp/mvpkm/vfp_switch.o: $(deps_arch/arm/mvp/mvpkm/vfp_switch.o)

$(deps_arch/arm/mvp/mvpkm/vfp_switch.o):
