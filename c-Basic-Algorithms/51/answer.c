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

	int count_even = 0;

	for(int i = 0; i < size; i++)
		if(arr[i] % 2 == 0)
			count_even++;

	printf("%d", count_even);

	return 0;
}
