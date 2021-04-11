obj-m += ioctl.o

all:
	make -C /home/user/eworkspace/packages/linux-4.14.228 M=$(PWD) modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
clean:
	make -C /home/user/eworkspace/packages/linux-4.14.228 M=$(PWD) clean ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-
build:
	arm-linux-gnueabi-gcc user_4.c -o lio
