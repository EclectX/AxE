
CC = /opt/riscv32i/bin/riscv32-unknown-elf-gcc
CC_DESKTOP = gcc

SMALL = rv32i
BIG = rv32im
LIBS = ../../_libs
SRC = $(LIBS)/util.c $(LIBS)/print.c $(LIBS)/fixed_point.c arch_func.c clk_func.c math_func.c\
  partition_func.c nodes_func.c prgs_func.c queue_func.c time_func.c scheduler.c nodes.c prgs.c energy_harvester.c


INC = -I$(LIBS)

# CFLAGS

OPT = O0
#~ OPT = O1
WARN = Wall

OTHER = -pedantic -ffreestanding -fstack-usage

CFLAGS = -$(WARN) -$(OPT) $(OTHER) $(INC)
#~ CFLAGS = -$(WARN) $(OTHER) $(INC)

# LINKER

LINK = -Ttext 0 -Wl,-e,my_start

.PHONY: clean objdump rv32i rv32im

rv32i: ARCH=$(SMALL)
rv32i: $(ARCH)_main.hex $(ARCH)_code

rv32im: ARCH=$(BIG)
rv32im: $(ARCH)_main.hex $(ARCH)_code

$(ARCH)_code: $(ARCH)_main.elf
	/opt/riscv32i/bin/riscv32-unknown-elf-objdump -S ./$(ARCH)_main.elf > $(ARCH)_objdump

$(ARCH)_main.hex: $(ARCH)_main.bin
	python3 ../../../tools/freedom-bin2hex.py --bit-width 32 ./$(ARCH)_main.bin > $(ARCH)_main.hex

$(ARCH)_main.bin: $(ARCH)_main.elf
	/opt/riscv32i/bin/riscv32-unknown-elf-objcopy ./$(ARCH)_main.elf -O binary ./$(ARCH)_main.bin

$(ARCH)_main.elf:
	$(CC) -march=$(ARCH) $(CFLAGS) -o ./$(ARCH)_main.elf $(LINK) ../../_libs/start.S $(SRC) ./main.c -lm

clean:
	rm -f main.elf main.bin main.hex main.map objdump *.su *.o rv32*
