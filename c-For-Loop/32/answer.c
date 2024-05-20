#include <stdio.h>
#include <math.h>

int is_prime(int num) {

        if(num < 2)
                return 0;

        for(int i = 2; i <= sqrt(num); i++) {
                if(num % i == 0)
                        return 0;
        }

        return 1;
}

int main() {

	int num = 0;

	printf("Input a number: ");
	scanf("%d", &num);

	if(is_prime(num))
		printf("%d is a prime number\n", num);
	else
		printf("%d is not a prime number\n", num);

	return 0;
}
