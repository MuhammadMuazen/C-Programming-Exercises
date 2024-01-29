#include <stdio.h>

int main(void) {

	int end_value;

	printf("Please enter the end value: ");
	scanf("%d", &end_value);
	printf("List of square of each one of the even values from 1 to a %d: \n", end_value);
	
	register int i;
	for(i = 1; i <= end_value; i++)
		if(i % 2 == 0) 
			printf("%d^%d = %d\n", i, i, i * i);

	return 0;
}
