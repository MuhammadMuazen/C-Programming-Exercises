#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int n1, n2;

	printf("Input the two numbers:\n");
	scanf("%d%d", &n1, &n2);
	
	if(n1 == n2)
		printf("%d", 0);
	else if(abs(n1 - 100) > abs(n2 - 100))
		printf("%d", n2);
	else if(abs(n2 - 100) > abs(n1 - 100))
		printf("%d", n1);

	return 0;
}
