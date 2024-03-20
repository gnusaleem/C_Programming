CC=gcc
DIR1=bitops
DIR2=leetcode
DIR3=sorting

all:fbitops fleetcode fsorting

fbitops:
	make -C $(DIR1)
fleetcode:
	make -C $(DIR2)
fsorting:
	make -C $(DIR3)

.PHONY:
clean:
	make -C $(DIR1) clean
	make -C $(DIR2) clean
	make -C $(DIR3) clean
