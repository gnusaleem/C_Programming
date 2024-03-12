#include <stdio.h>
#include <stdlib.h>



/*int countOdds(int low, int high){
	int count = 0;

	do {
		if (low & 1 == 1) {
			count++;
			low++;
		}
	} while(low <= high);

	return count;
}

*/

int countOdds(int low, int high) {
	if ((low & 1 == 1) || (high & 1 == 1))
		return ((high - low) >> 1) + 1;
	else
		return ((high -low) >> 1);
}

int main(int argc, char *argv[])
{
	int low = 3;
	int high = 7;
	int res;

	res = countOdds(low, high);
	printf("odd numbers are %d\n", res);

	return 0;
}

