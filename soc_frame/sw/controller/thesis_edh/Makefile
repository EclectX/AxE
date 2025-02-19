
CC = /opt/riscv32im/bin/riscv32-unknown-elf-gcc
CC_DESKTOP = gcc

SMALL = rv32i
BIG = rv32im
LIBS = ../../_libs
SRC = $(LIBS)/memmgr.c $(LIBS)/print.c $(LIBS)/util.c


INC = -I$(LIBS)

# CFLAGS

OPT = O0
#~ OPT = O1
WARN = Wall

OTHER = -pedantic -ffreestanding -fstack-usage
#	Added to show fewer errors
CFLAGS = -$(WARN) -$(OPT) $(OTHER) $(INC) -Wno-incompatible-pointer-types -Wno-int-conversion -Wno-unused-variable -Wno-unused-but-set-variable
#~ CFLAGS = -$(WARN) $(OTHER) $(INC)

# LINKER

LINK = -Ttext 0 -Wl,-e,my_start

.PHONY: clean objdump rv32im


rv32im: ARCH=$(BIG)
rv32im: $(ARCH)_main.hex $(ARCH)_code

$(ARCH)_code: $(ARCH)_main.elf
	/opt/riscv32im/bin/riscv32-unknown-elf-objdump -S ./$(ARCH)_main.elf > $(ARCH)_objdump

$(ARCH)_main.hex: $(ARCH)_main.bin
	python3 ../../../tools/freedom-bin2hex.py --bit-width 32 ./$(ARCH)_main.bin > $(ARCH)_main.hex

$(ARCH)_main.bin: $(ARCH)_main.elf
	/opt/riscv32im/bin/riscv32-unknown-elf-objcopy ./$(ARCH)_main.elf -O binary ./$(ARCH)_main.bin

$(ARCH)_main.elf:
	$(CC) -march=$(ARCH) $(CFLAGS) -o ./$(ARCH)_main.elf $(LINK) ../../_libs/start.S $(SRC) ./main.c -lm

clean:
	rm -f main.elf main.bin main.hex main.map objdump *.su *.o rv32*
