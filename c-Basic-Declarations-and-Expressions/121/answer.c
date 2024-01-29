#include <stdio.h>

int main(void) {

	int in_num;

	printf("Input a number (integer value): ");
	scanf("%d", &in_num);

	for(register int i = 1; i <= in_num; i++) 
		if(in_num % i == 0)
			printf("%d\n", i);

	return 0;
}
