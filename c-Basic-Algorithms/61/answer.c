#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size <= 1) {
		printf("%d", 0);
		return 0;
	}

	int arr[size];
	int five_cond = 0;

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	for(int i = 0; i < size - 1; i++) {
		if((arr[i] == arr[i + 1]) && arr[i] == 5)
			five_cond++;
		if((arr[i] == arr[i + 2]) && arr[i] == 5)
			five_cond++;
	}

	if(five_cond)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
