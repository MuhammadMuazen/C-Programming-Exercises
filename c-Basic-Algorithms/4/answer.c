#include <stdio.h>

int main(void) {

	int n;

	printf("Input a number: ");
	scanf("%d", &n);

	if((n >= 10 && n <= 100) || n == 200) 
		printf("%d", 1);
	else 
		printf("%d", 0);

	return 0;
}
