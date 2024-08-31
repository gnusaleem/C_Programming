#include <stdio.h>

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

/*void bubble_sort(int *nums, int size) {

	int i, j;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (nums[i] < nums[j])
				swap(&nums[i], &nums[j]);
		}
	}
}

*/
void bubble_sort(int *nums, int size) {

	int i, j;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (nums[i] < nums[j])
				swap(&nums[i], &nums[j]);
		}
	}
}

void print_array(int *nums, int size) {
	int i;

	for (i = 0 ; i < size; i++)
		printf("Sorted array %d\n", nums[i]);
}

int main(int argc, char *argv[])
{
	int nums[] = {10, 3, 4, 5, 33, 87, 9, 22, 17};
	int size_array = sizeof(nums)/sizeof(nums[0]);

	bubble_sort(nums, size_array);
	print_array(nums, size_array);

	return 0;
}
	
