#include <stdio.h>

int main(void) {

	int inp_num, even_num = 0, odd_num = 0, pos_num = 0, neg_num = 0;

	printf("Input 7 integers:\n");

	for(register int i = 0; i < 7; i++) {
		scanf("%d", &inp_num);

		if(inp_num % 2 == 0)
			even_num++;
		if(inp_num % 2 != 0)
			odd_num++;
		if(inp_num >= 0) 
			pos_num++;
		if(inp_num < 0)
			neg_num++;
	}

	printf("Number of even values: %d\n", even_num);
	printf("Number of odd values: %d\n", odd_num);
	printf("Number of positive values: %d\n", pos_num);
	printf("Number of negative values: %d\n", neg_num);

	return 0;
}
