#include <stdio.h>

int main(void){

	int first_int, second_int;

	printf("Input the first integer: ");
	scanf("%d", &first_int);
	printf("Input the second integer: ");
	scanf("%d", &second_int);
	
	int result = first_int * second_int;

	printf("Product of the above two integers = %d\n", result);

	return 0;
}
