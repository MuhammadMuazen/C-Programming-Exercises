#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	int arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int new_arr[size];
	int even_index = 0, odd_index = size - 1;

	for(int i = 0; i < size; i++) {
		if(arr[i] % 2 == 0)
			new_arr[even_index++] = arr[i];
		else
			new_arr[odd_index--] = arr[i];
	}

	printf("Elements in original array are: ");
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\nElements in new array are: ");
	for(int i = 0; i < size; i++)
		printf("%d ", new_arr[i]);

	return 0;
}
