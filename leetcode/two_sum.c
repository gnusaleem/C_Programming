#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    
	*returnSize = 2;
	int *returnValues = malloc((*returnSize) * sizeof(int));

	for (int i = 0; i < numsSize - 1; i++) {
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				returnValues[0] = i;
				returnValues[1] = j;
				break;
			}
		}
	}
    
	return returnValues;
}

int main( void )
{
	int a[] = { 2, 7, 11, 15 };
	int target = 9;
	int resultSize = 2;
	int num_size = 4;

	int *result = twoSum( a, num_size, target, &resultSize );

	if (result) {
		for (int i = 0; i < resultSize; i+=2) {
			printf( "%d, %d ", result[i], result[i + 1] );
		}
		printf("\n");
	}
}
