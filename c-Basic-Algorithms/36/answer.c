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
	int sum = 0;

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	for(int i = 0; i < size; i++)
		sum += arr[i];

	printf("sum = %d\n", sum);

	return 0;
}
