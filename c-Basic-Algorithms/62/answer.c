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

	printf("Input the array elements:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &arr[i]);

	int first_three = 0, five_after_three = 0;
	int cond_true = 0;

	for(int i = 0; i < size; i++) {
		if(arr[i] == 3 && !first_three) {
			five_after_three++;
			first_three++;
		}
		if(five_after_three) {
			if(arr[i] == 5)
				cond_true++;
		}
	}

	if(cond_true)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
