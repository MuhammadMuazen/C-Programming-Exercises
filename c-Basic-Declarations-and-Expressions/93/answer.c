#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_prime(int num);

int main(void) {
	
	int nearly_prim = 0, num;
	
	printf("Input a positive number: ");
	scanf("%d", &num);

	if(num < 0) {
		printf("Please input a valid positive integer!\n");
		exit(-1);
	}
	
	for(register int i = 0; i <= num; i++) {
		if(is_prime(i) && num % i == 0) {
			int factor = num / i;
			if(is_prime(factor)) {
				nearly_prim = 1;
				break;
			}
		}
	}

	if(nearly_prim == 1) 
		printf("%d is a Nearly prime number", num);
	else
		printf("It is not a Nearly prime number\n");

	return 0;
}

int is_prime(int num) {
	
	if(num < 2) 
		return 0;

	for(register int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0) {
			return 0;
		}
	}
	
	return 1;
}
