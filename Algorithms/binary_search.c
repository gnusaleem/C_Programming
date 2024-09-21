#include <stdio.h>
#include <stdlib.h>

#define ITERATIVE 1
#define RECURSIVE 2

int binary_search(int *arr, int size, int val)
{
	int res = -1;
	int mid;
	int low = 0;
	int high = size;

	while (low <= high) {
		mid = (low + high) / 2;
		if (val < arr[mid]) {
			high = mid - 1;
		} else if (val > arr[mid]) {
			low = mid + 1;
		} else {
			return mid;
		}
	}
	return res;
}

int binary_rec_search(int *arr, int low, int high, int val)
{
	int res = -1;
	int mid;

	if (low <= high) {
		mid = (low + high) / 2;
		if (val < arr[mid]) {
			return binary_rec_search(arr, low, mid - 1, val);
		} else if (val > arr[mid]) {
			return binary_rec_search(arr, mid + 1, high, val);
		} else {
			return mid;
		}
	}
	return -1;
}

int main(void)
{
	int i, val;
	int *ptr, size;
	int res, choice;
	int low = 0, high = 0;
	
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

		printf("Enter the value to search\n");
		scanf("%d", &val);

		printf("Select the Method type\n 1. ITERATIVE\n 2. RECURSIVE\n");
		scanf("%d", &choice);

		if (choice  == 1)
			printf("Selected ITERATIVE Method\n");
		else
			printf("Selected RECURSIVE Method\n");
		
		switch (choice) {
		case ITERATIVE:
			res = binary_search(ptr, size, val);
			break;
		case RECURSIVE:
			high = size;
			res = binary_rec_search(ptr, low, high, val);
			break;
		default:
			printf("Invalid choice\n");
			break;
		}
		
		if (res == -1)
			printf("Element not found\n");
		else
			printf("Element found in pos = %d\n", res);
	}

	free(ptr);
	return 0;
}
