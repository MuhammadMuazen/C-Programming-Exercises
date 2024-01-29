#include <stdio.h>

int main(void) {

	char input_number[7];

	printf("Input a seven digit number: ");
	scanf("%s", &input_number);

	for(int i = 0; i < 7; i++) 
		printf("%c  ", input_number[i]);

	return 0;
}
