#include <stdio.h>
#include <ctype.h>

int main() {

	char c;

	printf("Input a char: ");
	scanf("%c", &c);

	if(isdigit(c))
		printf("This is a digit character.\n");
	else if(isalpha(c))
		printf("This is an alphabet character.\n");
	else
		printf("This is a special character.\n");

	return 0;
}
