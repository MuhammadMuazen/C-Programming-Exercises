#include <stdio.h>

#define MAX_LEN 999

void print_array(int arr[], int size);

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size <= 0 || size > MAX_LEN) {
		printf("The size of the array must be bigger than zero!\n");
		return 1;
	}

	int in_arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &in_arr[i]);
	
	printf("Elements of the original array: ");
	print_array(in_arr, size);

	int length_in_arr = (int)sizeof(in_arr) / sizeof(int);

	int new_arr[2] = {in_arr[0], in_arr[length_in_arr - 1]};

	printf("Elements of the new array are: ");
	
	if(size == 1)
		print_array(new_arr, 1);
	else
		print_array(new_arr, 2);

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
