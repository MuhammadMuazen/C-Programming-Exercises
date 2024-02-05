#include <stdio.h>

int main(void) {

	int fn, sn, tn;
	
	printf("Input three numbers:\n");
	scanf("%d%d%d", &fn, &sn, &tn);

	if(fn == sn) 
		printf("%d\n", tn);
	else
		printf("%d\n", fn + sn + tn);

	return 0;
}
