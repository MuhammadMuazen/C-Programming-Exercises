#include <stdio.h>

int is_prime(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

void find_sum_of_two_primes(int number) {
    printf("Possible combinations of two prime numbers that sum up to %d:\n", number);

    for (int i = 2; i <= number / 2; ++i) {
        if (is_prime(i) && is_prime(number - i)) {
            printf("%d = %d + %d\n", number, i, (number - i));
        }
    }
}

int main() {
    int number;

    printf("Input a positive integer: ");
    scanf("%d", &number);

    printf("Expected Output:\n");
    find_sum_of_two_primes(number);

    return 0;
}
