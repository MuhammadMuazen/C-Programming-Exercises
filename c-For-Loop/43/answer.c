#include <stdio.h>

int main() {

	int fnum = 0, snum = 0, hcf = 1;

	printf("Input 1st number for HCF: ");
	scanf("%d", &fnum);
	printf("Input 2nd number for HCF: ");
	scanf("%d", &snum);

	int min = (fnum < snum) ? fnum : snum;

	for(int i = 1; i <= min; i++) 
		if(fnum % i == 0 && snum % i == 0)
			hcf = i;

	printf("HCF of %d and %d is: %d\n", fnum, snum, hcf);

	return 0;
}
