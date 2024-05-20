#include <stdio.h>
#include <math.h>

int main() {

	double fnum = 0.0, terms = 0.0, ratio = 0.0;

	printf("Input the first number of the G.P. series: ");
	scanf("%lf", &fnum);
	printf("Input the number or terms in the G.P. series: ");
	scanf("%lf", &terms);
	printf("Input the common ratio of G.P. series: ");
	scanf("%lf", &ratio);

	double gp = 0.0;
	
	printf("The numbers for the G.P. series:\n");
	
	for (int j = 0; j < terms; j++) {
        	double i = fnum * pow(ratio, j);
        	printf("%lf ", i);
        	gp += i;
    	}

	printf("\nThe Sum of the G.P. series: %lf\n", gp);

	return 0;
}
