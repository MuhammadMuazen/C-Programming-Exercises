#include <stdio.h>

int main(void) {

	int input_num;
	
	printf("Input any number: ");
	scanf("%d", &input_num);

	double s = 0;

	register int i;
	for(i = 1; i <= input_num; i++)
		s += (double)1/i;

	printf("Sum = %lf", s);

	return 0;
}
