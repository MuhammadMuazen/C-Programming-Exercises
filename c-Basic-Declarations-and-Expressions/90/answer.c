#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isprime(int num);
int ispalindromes(int num);

int main(void) {

	int x,y;
	
	printf("Input two numbers (separated by a space): ");
	scanf("%d %d", &x, &y);
	
	if(x > y || x < 5 || y < 5) {
		printf("Please Enter a valid values\n");
		printf("(5 <= x<y<= 1000,000,000)\n");
		exit(-1);
	}

	printf("List of prime palindromes:\n");
	
	for(x; x <= y; x++) {
		if(isprime(x) && ispalindromes(x))
			printf("%d\n", x);
	}

	return 0;
}

int isprime(int num) {

	int p = 1;

	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0) { 
			p = 0;
			break;
		}
	}
	
	if(p == 1)
		return 1;
	else
		return 0;
}
		

int ispalindromes(int num) {

	int r, sum = 0;
	int temp = num;

	while(num > 0) {
		r = num % 10;
		sum = (sum * 10) + r;
		num = num / 10;
	}

	if(temp == sum)
		return 1;
	else 
		return 0;
}
