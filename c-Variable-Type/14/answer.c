#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	char *str;

	printf("Input a number: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = '\0';

	double num = atof(str);

	printf("The value Input is %lf.\n", num);

	return 0;
}
