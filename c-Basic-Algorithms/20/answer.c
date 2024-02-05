#include <stdio.h>

int main(void) {

	int n;

	printf("Input a positive integer: ");
	scanf("%d", &n);

	if(n < 0) {
		printf("The input must be a positive integer!\n");
		return 1;
	}

	int condition = 0;

	if(n % 3 == 0)
		condition++;
	if(n % 7 == 0)
		condition++;


	if(condition == 1)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
