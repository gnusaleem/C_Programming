#include <stdio.h>
#include "bitops.h"

int main(void)
{
	int num;
	int pos;
	int opt;

	printf("Choose the option\n0.set\t1.clear\t2.setclear\t3.toggle\n");
	scanf("%d", &opt);
	printf("Enter the number\n");
	scanf("%d", &num);
	printf("Enter the position\n");
	scanf("%d", &pos);

	switch(opt) {
	case SET:
		printf("set bit is %d\n", set(num, pos));
		break;
	case CLEAR:
		printf("cleat bit is %d\n", clear(num, pos));
		break;
	default:
		printf("invalid option\n");
		break;
	}

	return 0;
}
