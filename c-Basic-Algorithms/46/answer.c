#include <stdio.h>

void print_array(int arr[], int size);

int main(void) {

	int size;

	printf("Input the size of the array (must be even): ");
	scanf("%d", &size);

	if(size % 2 != 0 || size <= 0) {
		printf("The size must be even and bigger than zero!\n");
		return 0;
	}

	int arr[size];

	printf("Input the array elements:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int new_arr[2] = {arr[(size / 2) - 1] , arr[size / 2]};
	
	printf("The original array is: ");
	print_array(arr, size);
	printf("The new array is: ");
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

