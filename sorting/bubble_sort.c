#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

void bubble_sort(int *nums, int size) {

	int i, j;

	for (i = 0; i < size; i++) {
		for (j = i + 1; j < size; j++) {
			if (nums[i] > nums[j])
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
	int i;
	int *ptr, size;

	printf("Enter the Array size\n");
	scanf("%d", &size);

	ptr = (int *)malloc(sizeof(int) * size);

	if (ptr == NULL) {
		printf("Memory not allocated\n");
		exit(0);
	} else {
		printf("Enter the %d Number to be stored in array\n", size);
		for (i = 0; i <= size; i++) {
			scanf("%d", &ptr[i]);
		}

		for (i = 0; i <= size; i++) {
			printf("pos = %d, value = %d, address is %p\n", i, ptr[i], (int *)&ptr[i]);
		}
	}

	bubble_sort(ptr, size);
	print_array(ptr, size);
	free(ptr);

	return 0;
}
