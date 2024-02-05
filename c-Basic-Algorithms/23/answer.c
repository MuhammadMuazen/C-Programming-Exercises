#include <stdio.h>

int main(void) {

	int fn, sn, tn;

	printf("Input the three integers: \n");
	scanf("%d%d%d", &fn, &sn, &tn);

	if(fn + sn == tn)
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
