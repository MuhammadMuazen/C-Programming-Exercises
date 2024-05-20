#include <stdio.h>

void decimal_to_hexadecimal(int decimal_number) {
    char hexadecimal_number[100];
    int index = 0;

    for (; decimal_number > 0; decimal_number /= 16) {
        int remainder = decimal_number % 16;

        if (remainder < 10) {
            hexadecimal_number[index++] = remainder + '0';
        } else {
            hexadecimal_number[index++] = remainder + 'A' - 10;
        }
    }

    printf("Hexadecimal equivalent: ");

    for (int i = index - 1; i >= 0; --i) {
        printf("%c", hexadecimal_number[i]);
    }

    printf("\n");
}

int main() {
    int decimal_number;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal_number);

    decimal_to_hexadecimal(decimal_number);

    return 0;
}
