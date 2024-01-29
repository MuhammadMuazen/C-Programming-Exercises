#include <stdio.h>

int main(void) {

	int x; 

	printf("Input an integer: ");
	scanf("%d", &x);

	if(x >= 0 && x % 2 == 0)
		printf("Positive Even\n");
	else if(x < 0 && x % 2 == 0)
		printf("Negative Even\n");
	else if(x >= 0 && x % 2 != 0)
		printf("Positive Odd\n");
	else if(x < 0 && x % 2 != 0)
		printf("Negative Odd\n");

	return 0;

