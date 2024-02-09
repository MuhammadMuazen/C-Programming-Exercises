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
	
	for(int i = 0; i < size; i++) {
		if(i == size - 1)
			new_arr[i] = arr[0];
		else
			new_arr[i] = arr[i + 1];
	}

	printf("\nElements in original array are: ");
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\nElements in new array are: ");
	for(int i = 0; i < size; i++)
                printf("%d ", new_arr[i]);

	return 0;
}
