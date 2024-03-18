#include <stdio.h>

int main() {

	int sum_even = 0, sum_odd = 0;
	int i = 1;
	do {
		if(i % 2 == 0)
			sum_even += i;
		else if(i % 2 != 0)
			sum_odd += i;
		i++;

	} while(i <= 50);

	printf("The sum of the even numbers is: %d\n", sum_even);
	printf("The sum of the odd numbers is: %d\n", sum_odd);

	return 0;
}
