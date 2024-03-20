#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
	int i;

	for (i = 0 ; i < numsSize; i++) {
		if (nums[i] >= target)
			return i;
	}
}

int main(int argc, char *argv[])
{
	int i;
	int target = 5;
	int res;
	int nums[] = {1, 3, 5, 6};
	int size = sizeof(nums)/sizeof(nums[0]);

	res = searchInsert(nums, size, target);

	printf("Result is %d\n", res);

	return 0;
}
