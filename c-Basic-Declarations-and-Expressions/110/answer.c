#include <stdio.h>

int main(void) {

	int inp_num;

	printf("Input a number (integer): ");
	scanf("%d", &inp_num);

	if(inp_num >= 0 && inp_num % 2 == 0)
		printf("Number is positive-even\n");
	
	if(inp_num < 0 && inp_num % 2 == 0)
		printf("Number is negative-even\n");

	if(inp_num >= 0 && inp_num % 2 != 0) 
		printf("Number is positive-odd\n");

	if(inp_num < 0 && inp_num % 2 != 0)
		printf("Number is negative-odd\n");

	return 0;
}
