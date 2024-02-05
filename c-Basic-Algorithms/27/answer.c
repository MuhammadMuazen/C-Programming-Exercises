#include <stdio.h>

int main(void) {

	int fn, sn;

	printf("Input the first number: ");
	scanf("%d", &fn);
	printf("Input the second number: ");
	scanf("%d", &sn);

	if(fn > sn) {
		if(fn % 5 == sn % 5)
			printf("%d", sn);
		else
			printf("%d", fn);
	}
	else if(sn > fn) {
		if(sn % 5 == fn % 5)
			printf("%d", fn);
		else
			printf("%d", sn);
	}
	else if(sn == fn)
		printf("%d", 0);

	return 0;
}

