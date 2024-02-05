#include <stdio.h>

int main(void) {

	int fn, sn;

	printf("Input the first number: ");
	scanf("%d", &fn);
	printf("Input the second number: ");
	scanf("%d", &sn);

	if((fn >= 10 && fn <= 20) || (sn >= 10 && sn <= 20))
		printf("%d", 1);
	else
		printf("%d", fn + sn);

	return 0;
}
