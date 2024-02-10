#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size < 2) {
		printf("The size must be at least 2\n");
		return 1;
	}

	int arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int two_fifteen = 0;

	for(int i = 0; i < size; i++) {
		if(arr[i] == 15 && arr[i + 1] == 15)
			two_fifteen++;
	}

	if(two_fifteen)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
