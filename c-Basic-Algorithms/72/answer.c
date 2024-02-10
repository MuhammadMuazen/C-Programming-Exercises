#include <stdio.h>

int main(void) {

	int size; 
	
	printf("Input the size of the array: ");
	scanf("%d", &size);

	int arr[size];
	int five_count = 0;

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	//get the number of fives
	for(int i = 0; i < size; i++)
		if(arr[i] == 5)
			five_count++;

	int new_arr[size];
	int index = 0;

	for(int i = 0; i < size; i++)
		if(arr[i] != 5)
			new_arr[index++] = arr[i];
		
	int new_zero_location = size - 1;

	while(five_count > 0) {
		new_arr[new_zero_location--] = 0;
		five_count--;
	}

	printf("Elements of the original array: ");
	for(int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\nElements of the new array: ");
	for(int i = 0; i < size; i++)
		printf("%d ", new_arr[i]);

	return 0;
}
