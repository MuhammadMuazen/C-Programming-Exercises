#include <stdio.h>

int main() {

	int fnum = 0, snum = 0;

	printf("Input 1st number for LCM: ");
	scanf("%d", &fnum);
	printf("Input 2nd number for LCM: ");
	scanf("%d", &snum);

	int max = (fnum > snum) ? fnum : snum;

	for(;;) {
		if(max % fnum == 0 && max % snum == 0) {
			printf("LCM of %d and %d is: %d\n", fnum, snum, max);
			break;
		}

		++max;
	}

	return 0;
}
