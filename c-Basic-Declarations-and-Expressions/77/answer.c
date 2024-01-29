#include <stdio.h>
#include <stdlib.h>

int main(void) {

	double principle, rate;
	int days;

	while(1) {
		printf("Input loan amount (0 to quit): ");
		scanf("%lf", &principle);

		if(principle == 0) 
			break;

		printf("Input interest rate: ");
		scanf("%lf", &rate);
		printf("Input term of the loan in days: ");
		scanf("%d", &days);

		double interest = principle * rate * days / 365;

		printf("The interest amount is %.2lf\n", interest);
	}

	return 0;
}
