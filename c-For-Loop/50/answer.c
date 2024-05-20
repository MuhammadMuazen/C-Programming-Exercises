#include <stdio.h>

int decimal_to_octal(int decimal_number) {
    int octal_number = 0, place_value = 1;
    int temp = decimal_number;

    for (; temp != 0; temp /= 8) {
        octal_number += (temp % 8) * place_value;
        place_value *= 10;
    }

    return octal_number;
}

int main() {

	int num = 0;

	printf("Enter a number to convert: ");
	scanf("%d", &num);

	int oct_num = decimal_to_octal(num);

	printf("The Octal of %d is %d\n", num, oct_num);

	return 0;
}
