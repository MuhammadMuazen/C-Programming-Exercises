#include <stdio.h>

int main(void) {

	int x,y;

	printf("Input the first integer number: ");
	scanf("%d", &x);
	printf("Input the second integer number (greater than first integer): ");
	scanf("%d", &y);

	if(y < x) {
		printf("Please input the values where the second one is bigger!\n");
		return 1;
	}
	
	int even_sum = 0, odd_sum = 0;

	for(register int i = x; i <= y; i++) {
		if(i % 2 == 0) 
			even_sum += i;
		else if(i % 2 != 0)
			odd_sum += i;
	}
	
	printf("Sum of all odd values between %d and %d: %d\n", x, y, odd_sum);
	printf("Sum of all even values between %d and %d: %d\n", x, y, even_sum);

	return 0;
}
