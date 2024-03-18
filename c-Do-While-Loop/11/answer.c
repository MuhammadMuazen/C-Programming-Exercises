#include <stdio.h>
#include <math.h>

int main() {

	double principal, rate, time, compound_interest;
	int flag;

	do {
		printf("Input principal amount: ");
        	scanf("%lf", &principal);
		printf("Input annual interest rate (as a percentage): ");
        	scanf("%lf", &rate);
		printf("Input time period (in years): ");
        	scanf("%lf", &time);

		if (principal <= 0 || rate < 0 || time <= 0) {
            		printf("Please input valid positive values for principal, interest rate, and time.\n");
            		continue;
		}

		rate /= 100;
		compound_interest = principal * pow(1 + rate, time) - principal;
		printf("Compound Interest: %.2lf\n", compound_interest);
		printf("Want to calculate compound interest again? (1 for Yes, 0 for No): ");
        	scanf("%d", &flag);
	} while(flag == 1);

	return 0;
}
