#include <stdio.h>

int main(void) {

	float input_val;

	printf("Input the currency value (floating point with two decimal places): ");
	scanf("%f", &input_val);

	if(input_val < 0.0) {
		printf("Please enter a positive value!\n");
		return 1;
	}

	int n100 = 0, n50 = 0, n5 = 0, n1 = 0;
	int c50 = 0, c25 = 0, c10 = 0, c01 = 0;

	while(input_val > 0.00) {
		if(input_val >= 100.00) {
			n100++;
			input_val -= 100.00;
		}
		else if(input_val >= 50.00 && input_val < 100.00) {
			n50++;
			input_val -= 50.00;
		}
		else if(input_val >= 5.00 && input_val < 50.00) {
			n5++;
			input_val -= 5.00;
		}
		else if(input_val >= 1.00 && input_val < 5.00) {
			n1++;
			input_val -= 1.00;
		}
		else if(input_val >= 0.50 && input_val < 1.00) {
			c50++;
			input_val -= 0.50;
		}
		else if(input_val >= 0.25 && input_val < 0.50) {
			c25++;
			input_val -= 0.25;
		}
		else if(input_val >= 0.10 && input_val < 0.25) {
			c10++;
			input_val -= 0.10;
		}
		else if(input_val >= 0.01 && input_val < 0.10) {
			c01++;
			input_val -= 0.01;
		}
	}

	printf("\nCurrency Notes:\n");

	if(n100 != 0) 
		printf("100 number of Note(s): %d\n", n100);
	if(n50 != 0)
		printf("50 number of Note(s): %d\n", n50);
	if(n5 != 0)
		printf("5 number of Note(s): %d\n", n5);
	if(n1 != 0)
		printf("1 number of Note(s): %d\n", n1);

	printf("\n");

	if(c50 != 0)
		printf(".50 number of Coin(s): %d\n", c50);
	if(c25 != 0)
		printf(".25 number of Coin(s): %d\n", c25);
	if(c10 != 0)
		printf(".10 number of Coind(s): %d\n", c10);
	if(c01 != 0)
		printf(".01 number of Coin(s): %d\n", c01);

	return 0;
}
