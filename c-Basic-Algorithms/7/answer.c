#include <stdio.h>

int main(void) {

	int n1, n2;

	printf("Input the first number: ");
	scanf("%d", &n1);
	printf("Input the second number: ");
	scanf("%d", &n2);

	if((n1 >= 100 && n1 <= 200) && (n2 >= 100 && n2 <= 200))
		printf("%d", 1);
	else 
		printf("%d", 0);

	return 0;
}
