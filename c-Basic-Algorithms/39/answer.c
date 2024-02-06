#include <stdio.h>

#define MAX_LEN 5

void input_array(int arr[], int size);
void print_array(int arr[], int size);

int main(void) {
	
	int arr1[MAX_LEN], arr2[MAX_LEN];

	printf("Input the elements of the first array:\n");
	input_array(arr1, MAX_LEN);
	printf("Input the elements of the second array:\n");
	input_array(arr2, MAX_LEN);

	printf("Elements in original array are:\n");
	print_array(arr1, MAX_LEN);
	print_array(arr1, MAX_LEN);
	
	//form the new array
	int new_arr[MAX_LEN / 2];
	new_arr[0] = arr1[MAX_LEN /  2];
	new_arr[1] = arr2[MAX_LEN / 2];

	printf("Elements of the array are: ");
	print_array(new_arr, MAX_LEN / 2);
	
	return 0;
}

void input_array(int arr[], int size) {
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);
}

void print_array(int arr[], int size) {
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

