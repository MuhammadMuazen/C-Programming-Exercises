#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size < 0) {
		printf("The size must be zero or bigger!\n");
		return 1;
	}
	else if(size == 0)
		printf("%d\n", 0);
	else {
		int arr[size];
		int sum = 0;

		printf("Input the elements of the array:\n");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
			
			//check the condition
			if(arr[i] != 17)
				sum += arr[i];
		}

		printf("Sum of values in the array of integers except the number 17: %d\n", sum);
	}

	return 0;
}
