#include <stdio.h>

#define MAX_LEN 4

void print_array(int arr[], int size);

int main(void) {

	int arr[MAX_LEN];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < MAX_LEN; i++)
		scanf("%d", &arr[i]);
	
	printf("The array original array: ");
	print_array(arr, MAX_LEN);
	
	int temp = arr[0];

	for(int i = 0; i < MAX_LEN; i++)
		arr[i] = arr[i + 1];

	arr[3] = temp;
	
	printf("\nThe new array: ");
	print_array(arr, MAX_LEN);

}

void print_array(int arr[], int size) {
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
}
