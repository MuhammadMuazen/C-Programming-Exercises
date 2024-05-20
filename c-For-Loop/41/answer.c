#include <stdio.h>

int convert_to_bin(int num) {
	if(num == 0)
		return 0;
	else
		return (num % 2) + 10 * convert_to_bin(num / 2);
}

int main() {
	
	int num = 0;
	
	printf("Input a decimal number: ");
	scanf("%d", &num);

	printf("Binary number equivalent to said decimal number is:\n");
	printf("%d\n", convert_to_bin(num));

	return 0;
}
