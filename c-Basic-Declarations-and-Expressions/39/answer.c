#include <stdio.h>

int main(void) {

	int first_num, second_num, sum = 0;

	printf("Input the first integer: ");
	scanf("%d", &first_num);
	printf("Input the second integer: ");
	scanf("%d", &second_num);
	
	register int i;
	for(i = first_num; i <= second_num; i++)
		if(i % 17 != 0)
			sum += i;

	printf("Sum: %d\n", sum);

	return 0;
}

