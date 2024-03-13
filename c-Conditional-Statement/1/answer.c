#include <stdio.h>

int main(void) {

	int n1, n2;

	printf("Input two numbers:\n");
	scanf("%d%d", &n1, &n2);

	if(n1 == n2)
		printf("Number1 and Number2 are equal\n");
	else
		printf("Number1 and Number2 are not equal\n");

	return 0;
}
