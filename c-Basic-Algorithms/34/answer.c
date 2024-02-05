#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size <= 0) {
		printf("The size must be bigger than zero!\n");
		return 1;
	}

	int arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	if(arr[0] == arr[size - 1])
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
