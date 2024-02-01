#include <stdio.h>

int main(void) {

	int n1, n2;

	printf("Input the first number: ");
	scanf("%d", &n1);
	printf("Input the second number: ");
	scanf("%d", &n2);

	if(n1 == 30 || n2 == 30 || n1 + n2 == 30)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
