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

	int fnum = 0, snum = 0;

	printf("Input starting number of range: ");
	scanf("%d", &fnum);
	printf("Input ending number of range: ");
	scanf("%d", &snum);
	
	printf("The prime number between %d and %d are:\n", fnum, snum);

	for(int i = fnum; i <= snum; i++)
		if(is_prime(i))
			printf("%d ", i); 

	return 0;
}
