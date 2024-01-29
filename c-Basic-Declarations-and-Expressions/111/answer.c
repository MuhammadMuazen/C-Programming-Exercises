#include <stdio.h>

int main(void) {

	int inp_num;

	printf("Input a number (integer): ");
	scanf("%d", &inp_num);

	printf("Remainder value is 3 after divide all numbers between 1 and 100 by %d:\n", inp_num);

	for(register int i = 1; i <= 100; i++) 
		if(i % inp_num == 3)
			printf("%d\n", i);

	return 0;
}
