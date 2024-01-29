#include <stdio.h>

#define MAX_LEN 20

int most_repeated_element(int arr[], int size) {

	int most_repeated_number = arr[0];
	int max_count = 1;

	for(int i = 0; i < size; i++) {
		int current_number = arr[i];
		int current_count = 1;

		// Check the remaining elements for occurrences of the current number
		for(int j = i + 1; j < size; j++) {
			if(arr[j] == current_number) 
				current_count++;
		}

		if(current_count > max_count) {
			most_repeated_number = current_number;
			max_count = current_count;
		}
	}

	if(max_count == 1) 
		return 0;

	return most_repeated_number;
}

int min_element(int arr[], int size) {
	int min = arr[0];
	
	for(int i = 0; i < size; i++) {
		if(min > arr[i])
			min = arr[i];
	}

	return min;
}

int main(void) {

	int n, input_array[MAX_LEN];
	
	printf("Input the number of numbers you want to enter: ");
	scanf("%d", &n);
	
	if(n <= 0 || n > MAX_LEN) {
		printf("invlid input: 0 <= n <= 20\n");
		return 1;
	}


	printf("Input positive integers:\n");
	for(int i = 0; i < n; i++) {
		scanf("%d", &input_array[i]);

		//check if the input is valid
		if(input_array[i] <= 0) {
			printf("the elements must be positive larger than zero!\n");
			return 1;
		}
	}

	if(most_repeated_element(input_array, n)) {
		printf("The most repeated element is: %d\n", most_repeated_element(input_array, n));
	}
	else if(!most_repeated_element(input_array, n)) {
		printf("There is no repeated number so the smallest number is %d\n", min_element(input_array, n));
	}

	return 0;
}

