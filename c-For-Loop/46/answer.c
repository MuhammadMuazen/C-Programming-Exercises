#include <stdio.h>
#include <math.h>

int main() {

    long long binary_number;
    int decimal_number = 0;
    int i, remainder;

    printf("Input the binary number: ");
    scanf("%lld", &binary_number);

    long long temp = binary_number;

    for (i = 0; binary_number != 0; ++i) {
        remainder = binary_number % 10;
        binary_number /= 10;
        decimal_number += remainder * pow(2, i);
    }
	
    printf("The Binary Number: %lld\n", temp);
    printf("Decimal number: %d\n", decimal_number);

    return 0;
}
