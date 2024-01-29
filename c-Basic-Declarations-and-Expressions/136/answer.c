#include <stdio.h>
#include <math.h>

int is_prime(int num);

int main(void) {

	int n;

	printf("Input a number: ");
	scanf("%d", &n);

	if(n < 1 || n > 999999) {
		printf("input should be 1 <= n <= 999,999\n");
		return 1;
	}

	int count = 0;

	for(int i = 1; i <= n; i++)
		if(is_prime(i))
			count++;

	printf("Number of prime numbers which are less than or equal to %d\n%d\n", n, count);

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
