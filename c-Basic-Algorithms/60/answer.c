#include <stdio.h>

int main(void) {

	int size;
	
	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size < 1) {
		printf("The size must be bigger than zero!\n");
		return 1;
	}
	else if(size == 1) {
		printf("%d", 0);
		return 0;
	}

	int arr[size];
	int double_fives = 0, double_threes = 0;

	printf("Input the elements of the array:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	//check for 5 after 5 or 3 after 3
	for(int i = 0; i < size; i++) {
		if((arr[i] == arr[i + 1]) && arr[i] == 3)
			double_threes++;
		else if((arr[i] == arr[i + 1]) && arr[i] == 5)
			double_fives++;
	}

	if(double_fives || double_threes)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}


