#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	int arr[size];
	int five_location = 0;

	printf("Input the array elements:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
	
	for(int i = 0; i < size; i++) {
		if(arr[i] == 5) {
			five_location = i;
			break;
		}
	}

	int new_arr_size = five_location;
	int new_arr[new_arr_size];
	
	for(int i = 0; i < new_arr_size; i++)
		new_arr[i] = arr[i];

	printf("Elements in original array are: ");
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\nElements in new array are: ");
	for(int i = 0; i < new_arr_size; i++)
		printf("%d ", new_arr[i]);

	return 0;
}



