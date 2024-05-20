#include <stdio.h>

int binary_to_octal(long long binary_number) {
    int octal_number = 0, decimal_number = 0, i;

    for (i = 0; binary_number != 0; ++i) {
        decimal_number += (binary_number % 10) * (1 << i);
        binary_number /= 10;
    }

    for (i = 1; decimal_number != 0; i *= 10) {
        octal_number += (decimal_number % 8) * i;
        decimal_number /= 8;
    }

    return octal_number;
}

int main() {
    long long binary_number;

    printf("Enter a binary number: ");
    scanf("%lld", &binary_number);

    printf("The Binary Number: %lld\n", binary_number);
    printf("Octal equivalent: %d\n", binary_to_octal(binary_number));

    return 0;
}
