
CC=arm-none-eabi-gcc

MACH=cortex-m7 
CFLAGS= -c -mcpu=$(MACH) -mthumb -mfloat-abi=soft -std=gnu11 -Wall -O0


LDFLAGS=-mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=nano.specs -T STM32F746ZGTX_FLASH.ld -Wl,-Map=final.map
#LDFLAGS=-mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=rdimon.specs -T STM32F746ZGTX_FLASH.ld -T STM32F746ZGTX_RAM.ld -Wl,-Map=final.map
#rdimon = C nano lib with semihosting
#LDFLAGS_SH=-mcpu=$(MACH) -mthumb -mfloat-abi=soft --specs=rdimon.specs -T stm32_ls.ld -Wl,-Map=final.map

INC=-I./Inc -I./drivers/Inc


all:main.o syscalls.o sysmem.o startup.o final.elf



main.o:Src/main.c
	$(CC) $(INC) $(CFLAGS) $^ -o $@


syscalls.o:Src/syscalls.c
	$(CC) $(INC) $(CFLAGS) $^ -o $@


sysmem.o:Src/sysmem.c
	$(CC) $(INC) $(CFLAGS) $^ -o $@


startup.o:Startup/startup_stm32f746zgtx.s 
	$(CC) $(CFLAGS) $^ -o $@

final.elf: main.o syscalls.o sysmem.o startup.o
	$(CC) $(LDFLAGS) $^ -o $@


clean:
	rm -rf *.o *.elf *.map























