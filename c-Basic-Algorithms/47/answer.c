#include <stdio.h>

void print_array(int arr[], int size);
void set_array(int arr[], int size);

int main(void) {
	
	int arr1[3], arr2[3];

	printf("Input the elements of the first array:\n");
	set_array(arr1, 3);
	printf("Input the elements of the second array:\n");
	set_array(arr2, 3);

	int new_arr[6];
	int index = 0;

	for(int i = 0; i < 6; i++) {
		if(i < 3) {
			new_arr[i] = arr1[index];
			index++;
		}
		else if(i == 3) {
			index = 0;
			new_arr[i] = arr2[index];
			index++;
		}
		else if(i > 3) {
			new_arr[i] = arr2[index];
			index++;
		}
	}

	printf("The first original array is: ");
	print_array(arr1, 3);
	printf("The second original array is: ");
	print_array(arr2, 3);
	printf("New array: ");
	print_array(new_arr, 6);

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

