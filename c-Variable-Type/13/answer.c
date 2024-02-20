#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

	char *str;

	printf("Input a number: ");
	fgets(str, sizeof(str), stdin);

	str[strcspn(str, "\n")] = '\0';

	int num = atoi(str);

	printf("The value Input is %d.\n", num);

	return 0;
}
