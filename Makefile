CC=gcc
DIR1=bitops
DIR2=leetcode
DIR3=sorting
DIR4=Algorithms

all:fbitops fleetcode fsorting fAlgo

fbitops:
	make -C $(DIR1)
fleetcode:
	make -C $(DIR2)
fsorting:
	make -C $(DIR3)
fAlgo:
	make -C $(DIR4)

.PHONY:
clean:
	make -C $(DIR1) clean
	make -C $(DIR2) clean
	make -C $(DIR3) clean
	make -C $(DIR4) clean
