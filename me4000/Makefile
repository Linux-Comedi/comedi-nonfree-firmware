
all: me4000_firmware.bin

generate_firmware: me4000_fw.h main.c
	gcc -Wall main.c -o generate_firmware

me4000_firmware.bin: generate_firmware
	./generate_firmware > me4000_firmware.bin
