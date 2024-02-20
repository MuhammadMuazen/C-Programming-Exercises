#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num; 

	printf("Input a positive or negative number: ");
	scanf("%d", &num);

	num = abs(num);

	printf("The absolute value of the given number is: %d\n", num);

	return 0;
}

