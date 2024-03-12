#include <stdio.h>

int main(int argc, char **argv)
{
	int arr[] = {1, 2, 3, 4};
	int size = sizeof(arr)/sizeof(arr[1]);
	int i, len = 0;
	printf("Size is %d\n", size);

	for (i = 0 ; i <= size; i++) {
		len++;
		if (len == size) {
			arr[i] = arr[i] + 1;
			break;
		}
	}

	for (i = 0 ; i < size; i++)
		printf("elements are %d\n", arr[i]);
	
		
	return 0;
}
