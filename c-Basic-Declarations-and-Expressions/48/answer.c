#include <stdio.h>

int main(void) {

	int input_arr[5];

	printf("Input the 5 members of the array: \n");

	register int i;
	for(i = 0; i < 5; i++) {
		scanf("%d", &input_arr[i]);
		if(input_arr[i] <= 0)
			input_arr[i] = 100;
	}

	for(i = 0; i < 5; i++)
		printf("n[%d] = %d\n", i, input_arr[i]);

	return 0;
}
	


