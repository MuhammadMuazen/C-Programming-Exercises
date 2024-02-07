#include <stdio.h>

void set_array(int arr[], int size);
void print_array(int arr[], int size);
int sum_arr(int arr[], int size);

int main(void) {

	int arr1[3], arr2[3];
	
	printf("Input the elements of the first array:\n");
	set_array(arr1, 3);
	printf("\nInput the elements of the second array:\n");
	set_array(arr2, 3);

	int sum_arr1 = sum_arr(arr1, 3);
	int sum_arr2 = sum_arr(arr2, 3);
	
	printf("The first original array is: ");
	print_array(arr1, 3);
	printf("The second original array is: ");
	print_array(arr2, 3);

	printf("The array which has the largest sum: ");
	if(sum_arr1 > sum_arr2)
		print_array(arr1, 3);
	else
		print_array(arr2, 3);

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

int sum_arr(int arr[], int size) {
	int sum = 0;

	for(int i = 0; i < size; i++)
		sum += arr[i];
	
	return sum;
}
