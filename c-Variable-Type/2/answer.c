#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LEN 64

int main(void) {

	char input[MAX_LEN];

	printf("Input the string: ");
	fgets(input, MAX_LEN, stdin);

	input[strcspn(input, "\n")] = '\0';
	
	unsigned long number = strtoul(input, NULL, 10);

	printf("\n%lu\n", number);

	return 0;
}
