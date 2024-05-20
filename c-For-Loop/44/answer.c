#include <stdio.h>

int main() {

	int fnum = 0, snum = 0, hcf = 1;

	printf("Input 1st number for LCM: ");
	scanf("%d", &fnum);
	printf("Input 2nd number for LCM: ");
	scanf("%d", &snum);

	int min = (fnum < snum) ? fnum : snum;

	for(int i = 1; i <= min; i++) 
		if(fnum % i == 0 && snum % i == 0)
			hcf = i;

	int lcm = (fnum * snum) / hcf;

	printf("LCM of %d and %d is: %d\n", fnum, snum, lcm);

	return 0;
}
