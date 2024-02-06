#include <stdio.h>

void print_array(int arr[], int size);

int main(void) {

	int arr[3];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);

	printf("Elements in the original array are: ");
	print_array(arr, 3);

	//creation of the new array
	int new_arr[3];
	int seven_index = 0;

	for(int i = 0; i < 3; i++) {
		if(arr[i] == 5 && arr[i+1] == 7)
			seven_index = i + 1;
		new_arr[i] = arr[i];
	}

	new_arr[seven_index] = 1;
	
	printf("Elements in the new array are: ");
	print_array(new_arr, 3);

	return 0;
}

void print_array(int arr[], int size) {
	for(int i = 0; i < size; i++) {
		if(i == size - 1)
			printf("%d\n", arr[i]);
		else
			printf("%d, ", arr[i]);
	}
}


