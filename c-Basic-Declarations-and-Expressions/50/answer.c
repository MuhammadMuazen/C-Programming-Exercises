#include <stdio.h> 

int main(void) {

	int input_arr[5];

	printf("Input the 5 members of the array: \n");

	register int i;
	for(i = 0; i < 5; i++) 
		scanf("%d", &input_arr[i]);

	for(i = 0; i < 5; i++)
		if(input_arr[i] < 5)
			printf("A[%d] = %d\n", i, input_arr[i]);

	return 0;
}
