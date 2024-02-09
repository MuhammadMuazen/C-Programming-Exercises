#include <stdio.h>

int main(void) {

	int size;
	
	printf("Input the size of the array: ");
	scanf("%d", &size);

	int arr[size];
	
	printf("Input the elemnets of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int new_arr[size];
	int zero_count = 0;

	//count the number of zeros
	for(int i = 0; i < size; i++) 
		if(arr[i] == 0)
			zero_count++;

	//Create a new array with zeros at the beginning
	int new_index = 0;
	for(int i = 0; i < size; i++) {
		if(arr[i] != 0) {
			new_arr[zero_count + new_index] = arr[i];
			new_index++;
		}
	}
	
	//fill the zeros in the left side of the array
	for(int i = zero_count - 1; i >= 0; i--)
		new_arr[i] = 0;

	printf("Elements in original array are: ");
    	for (int i = 0; i < size; i++)
        	printf("%d ", arr[i]);
  	printf("\nElements in new array are: ");
    	for (int i = 0; i < size; i++)
        	printf("%d ", new_arr[i]);
	
	return 0;
}
