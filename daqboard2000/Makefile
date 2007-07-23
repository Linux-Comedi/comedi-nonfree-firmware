
all: daqboard2000_firmware.bin

generate_firmware: daqboard2000_fpga.h main.c
	gcc -Wall main.c -o generate_firmware

daqboard2000_firmware.bin: generate_firmware
	./generate_firmware > daqboard2000_firmware.bin
