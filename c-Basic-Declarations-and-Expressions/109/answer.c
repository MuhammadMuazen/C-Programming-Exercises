#include <stdio.h>

int main(void) {

	int inp_num;

	printf("Input a number: ");
	scanf("%d", &inp_num);

	printf("\nSquare of each even between 1 and %d:\n", inp_num); 
	for(register int i = 1; i <= inp_num; i++)
		if(i % 2 == 0)
			printf("%d^%d = %d\n", i, i, i*i);

	printf("\nSquare of each odd between 1 and %d:\n", inp_num);
	for(register int i = 1; i <= inp_num; i++)
		if(i % 2 != 0)
			printf("%d^%d = %d\n", i, i, i*i);

	return 0;
}
