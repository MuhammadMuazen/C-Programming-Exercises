#include <stdio.h>

int main(void) {

	int a, b, c;

	printf("Input three numbers:\n");
	scanf("%d%d%d", &a, &b, &c);

	if(a > c && a > b)
		printf("The 1st Number is the greatest among three!\n");
	else if(b > c && b > a)
		printf("The 2nd Number is the greatest among three!\n");
	else if(c > a && c > b)
		printf("The 3th Number is the greatest among three!\n");

	return 0;
}
