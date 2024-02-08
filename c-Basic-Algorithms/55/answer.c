#include <stdio.h>

int main(void) {

	int size;

	printf("Input the size of the array: ");
	scanf("%d", &size);

	if(size <= 1) 
		printf("%d", 0);
	else {
		int arr[size];
		int is_seven = 0, is_five = 0;

		printf("Input the elements of the array:\n");
		for(int i = 0; i < size; i++) {
			scanf("%d", &arr[i]);
			if(arr[i] == 5)
				is_five++;
			else if(arr[i] == 7)
				is_seven++;
		}

		if(is_five && is_seven)
			printf("%d", 1);
		else
			printf("%d", 0);
	}
	
	return 0;
}
			
