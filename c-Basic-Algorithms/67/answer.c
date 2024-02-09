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

	int adjacent_nums = 0;

	for(int i = 0; i < size - 2; i++)
		if(arr[i] == arr[i + 1] - 1 && arr[i + 1] == arr[i + 2] - 1)
			adjacent_nums++;
				
	if(adjacent_nums)
		printf("%d", 1);
	else
		printf("%d", 0);
	
	return 0;
}
