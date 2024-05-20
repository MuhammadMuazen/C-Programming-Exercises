#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int is_strong_number(int number) {
    int original_number = number;
    int sum = 0;
    int digit;

    for (; number != 0; number /= 10) {
        digit = number % 10;
        sum += factorial(digit);
    }

    return (sum == original_number);
}


int main() {

	int fnum = 0, snum = 0;

	printf("Input starting range of number: ");
	scanf("%d", &fnum);
	printf("Input ending range of number: ");
	scanf("%d", &snum);

	printf("\nThe Strong Numbers Are:\n");

	for(int i = fnum; i <= snum; i++)
		if(is_strong_number(i))
			printf("%d ", i);
	

	return 0;
}
