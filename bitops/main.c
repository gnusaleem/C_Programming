#include <stdio.h>
#include "bitops.h"

int main(void)
{
	int num = 10;
	int pos = 2;

	printf("set bit %d\n", set(num, pos));
	return 0;

}
