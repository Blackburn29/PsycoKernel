cmd_arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.o := /mnt/android/M8Kernel/PsycoKernel/scripts/gcc-wrapper.py /mnt/android/toolchains/arm-eabi-4.8/bin/arm-eabi-gcc -Wp,-MD,arch/arm/mvp/pvtcpkm/.pvtcp_off_linux_shim.o.d  -nostdinc -isystem /mnt/android/toolchains/arm-eabi-4.8/bin/../lib/gcc/arm-eabi/4.8/include -I/mnt/android/M8Kernel/PsycoKernel/arch/arm/include -Iarch/arm/include/generated -Iinclude  -include /mnt/android/M8Kernel/PsycoKernel/include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-msm/include -D__ASSEMBLY__ -mabi=aapcs-linux -mno-thumb-interwork -funwind-tables  -D__LINUX_ARM_ARCH__=7 -mcpu=cortex-a15  -include asm/unified.h -msoft-float -gdwarf-2       -DMODULE  -c -o arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.o arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.S

source_arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.o := arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.S

deps_arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.o := \
  /mnt/android/M8Kernel/PsycoKernel/arch/arm/include/asm/unified.h \
    $(wildcard include/config/arm/asm/unified.h) \
    $(wildcard include/config/thumb2/kernel.h) \

arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.o: $(deps_arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.o)

$(deps_arch/arm/mvp/pvtcpkm/pvtcp_off_linux_shim.o):
