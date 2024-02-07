#include <stdio.h>

void set_array(int arr[], int size);
void print_array(int arr[], int size);
void swap(int *x, int *y);

int main(void) {
	
	int size;
	
	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size <= 0) {
		printf("The size must be bigger than zero!");
		return 1;
	}

	int arr[size];

	printf("Input the elements of the array:\n");
	set_array(arr, size);

	printf("Elements in original array are: ");
	print_array(arr, size);
	
	printf("New array, after swapping first and last elements: ");
	if(size == 1)
		printf("%d", arr[0]);
	else {
		swap(&arr[0], &arr[size - 1]);
		print_array(arr, size);
	}

	return 0;
}

void set_array(int arr[], int size) {
        for(int i = 0; i < size; i++)
                scanf("%d", &arr[i]);
}

void print_array(int arr[], int size) {
        for(int i = 0; i < size; i++) {
                if(i == size - 1)
                        printf("%d\n", arr[i]);
                else
                        printf("%d, ", arr[i]);
        }
}

void swap(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
