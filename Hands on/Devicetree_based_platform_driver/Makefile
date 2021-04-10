obj-m += platform_driver.o
KSRC = /home/user/workspace/packages/linux-4.14.227

all:
	make -C ${KSRC}  M=${PWD}  modules ARCH=arm CROSS_COMPILE=arm-linux-gnueabi- 
clean:
	make -C ${KSRC}  M=${PWD}  clean 
 
