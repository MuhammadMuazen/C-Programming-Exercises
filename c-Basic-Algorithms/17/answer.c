#include <stdio.h>

int main(void) {

	int fn, sn;

	printf("Input the first number: ");
	scanf("%d", &fn);
	printf("Input the second number: ");
	scanf("%d", &sn);

	int sum = fn + sn;

	if(sum >= 10 && sum <= 20)
		printf("%d\n", 30);
	else 
		printf("%d\n", sum);

	return 0;
}
