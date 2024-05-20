#include <stdio.h>

int octal_to_decimal(int octal_number) {
    int decimal_number = 0, place_value = 1;
    int temp = octal_number;

    for (; temp != 0; temp /= 10) {
        decimal_number += (temp % 10) * place_value;
        place_value *= 8;
    }

    return decimal_number;
}

int main() {

	int oct_num = 0;

	printf("Input the Octal Number: ");
	scanf("%d", &oct_num);

	int dec_num = octal_to_decimal(oct_num);

	printf("The equivalent Decimal Number: %d", dec_num);

	return 0;
}
