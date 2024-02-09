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

	int two_evens = 0, two_odds = 0;

	for(int i = 0; i < size; i++) {
		if(arr[i] % 2 == 0 && arr[i + 1] % 2 == 0)
			two_evens++;
		else if(arr[i] % 2 != 0 && arr[i + 1] % 2 != 0)
			two_odds++;
	}

	if(two_odds || two_evens)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
