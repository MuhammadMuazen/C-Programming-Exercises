#include <stdio.h>

int main(void) {

	int num1, num2;

	printf("Input the first integer: ");
	scanf("%d", &num1);
	printf("Input the second integer: ");
	scanf("%d", &num2);

	register int i;
	for(i = num1; i < num2; i++)
		if(i % 7 == 2 || i % 7 == 3)
			printf("%d\n", i);

	return 0;
}
