obj-m += kfifodriver.o
KSRC = /home/user/eworkspace/packages/linux-4.14.228

all:
	make -C ${KSRC} M=${PWD} ARCH=arm CROSS_COMPILE=arm-linux-gnueabi-

clean:
	make -C ${KSRC} M=${PWD} clean
