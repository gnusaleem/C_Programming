#include <stdio.h>
#include "bitops.h"

int main(void)
{
	int num1;
	int pos1;
	int opt;
	int len;
	int pos2;

	printf("Choose the option\n0.set\t1.clear\t2.setclear\t3.toggle\n");
	printf("4.togglerang\t5.checkbit\n");
	scanf("%d", &opt);

	switch(opt) {
	case SET:
		printf("Enter the number\n");
		scanf("%d", &num1);
		printf("Enter the position\n");
		scanf("%d", &pos1);
		printf("set bit is %d\n", set(num1, pos1));
		break;
	case CLEAR:
		printf("Enter the number\n");
		scanf("%d", &num1);
		printf("Enter the position\n");
		scanf("%d", &pos1);
		printf("cleat bit is %d\n", clear(num1, pos1));
		break;
	case SETCLEAR:
		printf("Enter the number\n");
		scanf("%d", &num1);
		printf("Enter the 1st  number to set\n");
		scanf("%d", &pos1);
		printf("Enter the 2nd position to clear\n");
		scanf("%d", &pos2);
		printf("setcleat bit is %d\n", set_clear(pos1, pos2, num1));
		break;
	case TOGGLE:
		printf("Enter the number\n");
		scanf("%d", &num1);
		printf("Enter the position\n");
		scanf("%d", &pos1);
		printf("toggle bit is %d\n", toggle(num1, pos1));
		break;
	case TOGGLERANGE:
		printf("Enter the number\n");
		scanf("%d", &num1);
		printf("Enter the position\n");
		scanf("%d", &pos1);
		printf("Enter the range\n");
		scanf("%d", &len);
		printf("toggle bit is %d\n", togglerange(num1, pos1, len));
		break;
	case CHECKBIT:
		printf("Enter the number\n");
		scanf("%d", &num1);
		printf("Enter the position\n");
		scanf("%d", &pos1);
		printf("Checkbit is %d\n", checkbit(num1, pos1));
		break;
	default:
		printf("invalid option\n");
		break;
	}

	return 0;
}
