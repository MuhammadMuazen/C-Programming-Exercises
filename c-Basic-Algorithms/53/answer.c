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
		int sum = 0, in_section = 0;

		printf("Input the elements of the array:\n");
		for(int i = 0; i < size; i++)
			scanf("%d", &arr[i]);

		for(int i = 0; i < size; i++) {
			if(arr[i] == 5)
				in_section = 1;
			else if(in_section && arr[i] == 6)
				in_section = 0;
			else if(!in_section)
				sum += arr[i];
		}

		printf("Sum of values in the array of integers: %d\n", sum);
	}

	return 0;
}
