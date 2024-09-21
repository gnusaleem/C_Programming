#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int size, int val) {
	int i, pos=0;

	if (size == 0)
		return -1;

	for (i = 0; i <= size; i++) {
		if (arr[i] == val) {
			pos = i;
			return pos;
		}
	}
	return -1;
}

int main(void)
{
	int i, res;
	int *ptr, size;
	int val = 0;
	
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

		res = linear_search(ptr, size, val);

		if (res == -1)
			printf("Element not found\n");
		else
			printf("Element found in pos %d\n", res);\
	}

	free(ptr);
	return 0;
}
