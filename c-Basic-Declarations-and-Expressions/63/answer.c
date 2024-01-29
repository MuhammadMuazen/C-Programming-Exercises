#include <stdio.h>

int main(void) {

	int input_num, sum = 0;

	printf("Input a positive number less than 100: ");
	scanf("%d", &input_num);

	if(input_num > 0 && input_num < 100) {
		register int i, j = 1;
		for(i = 1; j <= input_num; i++) {
			sum += j * j * j * j;
			j += i;
		}
		
		printf("Sum of the series is %d", sum);
	}
	else
		printf("Please enter a valid number!\n");


	return 0;
}
