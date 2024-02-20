#include <stdio.h>

int binary_search(int arr[], int left, int right, int value) {
	
	while(left <= right) {

		int m = left + (right - left) / 2;

		if(arr[m] == value)
			return m;
		if(arr[m] < value)
			left = m + 1;
		else
			right = m - 1;
	}

	return -1;
}


int main(void) {

	int size;

	printf("Input the number of elements to be stored in the array: ");
	scanf("%d", &size);
	
	int arr[size];

	printf("Input %d elements in the array:\n", size);
	for(int i = 0; i < size; i++) {
		printf("element %d : ", i + 1);
		scanf("%d", &arr[i]);
	}

	int search_value;

	printf("Input a value to search: ");
	scanf("%d", &search_value);
	
	int result = binary_search(arr, 0, size - 1, search_value);

	if(result)
		printf("%d is found in the array!\n", search_value);
	else
		printf("%d is not found in the array!\n", search_value);

	return 0;
}
