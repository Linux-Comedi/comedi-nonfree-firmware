
all: me2600_firmware.bin

generate_firmware: me2600_fw.h main.c
	gcc -Wall main.c -o generate_firmware

me2600_firmware.bin: generate_firmware
	./generate_firmware > me2600_firmware.bin
