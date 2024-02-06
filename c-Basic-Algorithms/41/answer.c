#include <stdio.h>

#define MAX_LEN 2

int main(void) {

	int arr[MAX_LEN];
	int check_condition = 0;

	printf("Input the two elements of the array:\n");
	for(int i = 0; i < 2; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] == 15 || arr[i] == 20)
			check_condition++;
	}

	if(check_condition)
		printf("%d", 1);
	else
		printf("%d", 0);
	
	return 0;
}
