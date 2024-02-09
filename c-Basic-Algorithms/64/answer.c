#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size < 1) {
		printf("The size must be bigger than zero!\n");
		return 1;
	}

	int arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int num_of_fives = 0;

	for(int i = 0; i < size; i++)
		if(arr[i] == 5 && arr[i] != arr[i + 1])
			num_of_fives++;
	
	if(num_of_fives == 5)
		printf("%d", 1);
	else
		printf("%d", 0);
	
	return 0;
}
