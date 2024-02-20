#include <stdio.h>

int main(void) {

	int size;

	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &size);
	
	int arr[size];

	printf("Input %d elements in the array:\n", size);
	for(int i = 0; i < size; i++) {
		printf("element %d : ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("Values entered in the array are:\n");
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);

	return 0;
}
