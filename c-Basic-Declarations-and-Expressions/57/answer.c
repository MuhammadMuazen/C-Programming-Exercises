#include <stdio.h>

int main(void) {

	int input_num, output;

	printf("Input a number: ");
	scanf("%d", &input_num);

	printf("The original number = %d\n", input_num);
	printf("The reverse of the said number = ");

	if(input_num == 0)
		printf("0");
	else {
		while(input_num > 0) { 
			output = input_num % 10;
			printf("%d", output);

			input_num = input_num / 10;
		}
	}

	return 0;
}
