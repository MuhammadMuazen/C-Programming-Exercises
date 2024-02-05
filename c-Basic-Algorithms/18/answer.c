#include <stdio.h>

int main(void) {

	int fn, sn;

	printf("Input the first number: ");
	scanf("%d", &fn);
	printf("Input the second number: ");
	scanf("%d", &sn);

	if(fn == 5 || sn == 5 || fn - sn == 5 || sn - fn == 5 || sn + fn == 5)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
