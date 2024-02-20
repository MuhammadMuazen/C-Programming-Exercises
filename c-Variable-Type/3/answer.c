#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	
	char input[64];

	printf("Input the string: ");
	fgets(input, sizeof(input), stdin);

	input[strcspn(input, "\n")] = '\0';

	long int number = atol(input);

	printf("%ld\n", number); 

	return 0;
}
