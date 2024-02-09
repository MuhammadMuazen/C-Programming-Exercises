#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);
	
	int arr[size];
	int five_location = 0;

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] == 5)
			five_location = i;
	}

	int start_add = 0;
	int new_arr[start_add];
	
	for(int i = five_location + 1; i < size; i++) {
		new_arr[start_add] = arr[i];
		start_add++;
	}

	printf("Elements in original array are: ");
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\nElements in new array are: ");
	for(int i = 0; i < start_add; i++)
		printf("%d ", new_arr[i]); 

	return 0;
}

