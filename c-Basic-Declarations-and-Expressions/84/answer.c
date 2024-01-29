#include <stdio.h>

int main(void) {

	double num, sum = 0;

	printf("Input each number on a separate line (888 to exit): \n");

	while(1) {

		scanf("%lf", &num);
		
		if(num == 888) 
			break;

		sum += num;
	}

	printf("The average value of the said numbers is %lf", sum);

	return 0;
}
