#include <stdio.h>

int main(void) {
	
	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);
	
	int arr[size];

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int is_bigger = 1;

	for(int i = 1; i < size; i++) {
		if(arr[i] >= arr[i - 1])
			is_bigger++;
		else {
			is_bigger = 0;
			break;
		}
	}

	if(is_bigger)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}

