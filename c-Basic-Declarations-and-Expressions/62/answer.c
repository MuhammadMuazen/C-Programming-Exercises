#include <stdio.h>

int main(void) {

	int num, sum = 0;
	
	printf("Input a positive number less than 500: ");
	scanf("%d", &num);
	
	int out_num = num;

	if(num >= 500 || num < 0) 
		printf("Please enter a valid value\n");
	else {
		while(num) {
			sum += num % 10;
			num = num / 10;
		}
		printf("Sum of digits of %d is %d\n", out_num, sum);

	}

	return 0;
}
