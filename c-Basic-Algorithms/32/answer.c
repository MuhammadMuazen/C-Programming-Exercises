#include <stdio.h>

int main(void) {

	int x, y;

	printf("Input the first number: ");
	scanf("%d", &x);
	printf("Input the second number: ");
	scanf("%d", &y);

	if(x > 13 && y > 13)
		printf("%d", 0);
	else if(x <= 13 && y > 13)
		printf("%d", x);
	else if(y <= 13 && x > 13)
		printf("%d", y);
	else
		printf("%d", x > y ? x : y);

	return 0;
}
