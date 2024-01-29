#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

	int num;

	printf("Input a number (7 digits or fewer): ");
	scanf("%d", &num);

	//get the length of the input int
	int digits_length = floor(log10(abs(num))) + 1;
	
	if(digits_length > 7) {
		printf("Please enter a valid value!\n");
		exit(-1);
	}

	int number_of_three = 0;

	for(register int i = 0; i < digits_length; i++) {
		int current_digit = num % 10;
		
		if(current_digit == 3)
			number_of_three++;
		
		num = num / 10;
	}

	printf("The number of threes in the said number is %d\n", number_of_three);

	return 0;
}
