#include <stdio.h>

int main(void) {

	int fn, sn, tn;

	printf("Input three numbers:\n");
	scanf("%d%d%d", &fn, &sn, &tn);

	if(fn >= 20 && (fn < sn && fn < tn)) {
		printf("%d", 1);
		return 0;
	}
	else if(sn >= 20 && (sn < fn && sn < tn)) {
		printf("%d", 1);
		return 0;
	}
	else if(tn >= 20 && (tn < fn && tn < sn)) {
		printf("%d", 1);
		return 0;
	}
	else {
		printf("%d", 0);
		return 0;
	}
}

