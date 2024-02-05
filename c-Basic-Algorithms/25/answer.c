#include <stdio.h>

int main(void) {

	int fn, sn;

	printf("Input the first number: ");
	scanf("%d", &fn);
	printf("Input the second number: ");
	scanf("%d", &sn);
	
	if(sn < 0 || fn < 0) {
		printf("The numbers must be positive\n");
		return 1;
	}

	if(sn % 10 == fn % 10)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
