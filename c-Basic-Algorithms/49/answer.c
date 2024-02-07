#include <stdio.h>

void set_array(int arr[], int size);
void print_array(int arr[], int size);

int main(void) {

	int size;
	
	printf("Input the size of the array (must be at least 3): ");
	scanf("%d", &size);
	
	if(size < 3) {
		printf("The size must be at least 3!\n");
		return 1;
	}

	int arr[size];
	
	printf("Input the elements of the array:\n");
	set_array(arr, size);

	int new_arr[3] = {arr[(size / 2) - 1], arr[size / 2], arr[(size / 2) + 1]};

	printf("Elements in original array are: ");
	print_array(arr, size);
	printf("New array: ");
	print_array(new_arr, 3);

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
