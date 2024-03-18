#include <stdio.h>
#include <math.h>

int is_prime(int num);

int main() {

	int limit;
	int sum = 0, i = 0;
	printf("Input the limit: ");
	scanf("%d", &limit);
	
	do {
		if(is_prime(i))
			sum += i;
		i++;
	} while(i <= limit);
	
	printf("The sum of the prime numbers: %d", sum);

	return 0;
}

int is_prime(int num) {

	if(num < 2)
		return 0;

	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0)
			return 0;
	}

	return 1;
}
