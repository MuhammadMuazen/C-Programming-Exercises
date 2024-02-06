#include <stdio.h>

#define MAX_LEN 2

int main(void) {

	int size;
	
	printf("Input the size of the array [0-2]: ");
	scanf("%d", &size);

	if(size <= 0 || size > MAX_LEN)
		printf("%d", 0);
	else if(size == 1) {
		int temp;
		printf("Input the element: ");
		scanf("%d", &temp);
		printf("%d", 0);
	}
	else if(size == 2) {	
		int arr[MAX_LEN];

		printf("Input the elements of the array:\n");
		scanf("%d%d", &arr[0], &arr[1]);

		//check the condition
		if(arr[0] == arr[1] && (arr[0] == 10 || arr[0] == 20))
			printf("%d", 1);
		else
			printf("%d", 0);
	}

	return 0;
}
	
