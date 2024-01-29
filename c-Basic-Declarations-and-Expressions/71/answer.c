#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 20

int main(void) {

	char input_string[MAX_LIMIT];
	char copy_string[MAX_LIMIT];

	printf("Input a string: ");
	fgets(input_string, MAX_LIMIT, stdin);
	printf("Original string: %s", input_string);

	int copied_chars = 0;
	register int i;
	for(i = 0; i < MAX_LIMIT - 1; i++) {
		if(input_string[i] == '\0' || input_string[i] == '\n')
			break;
		copy_string[i] = input_string[i];
		copied_chars++;
	}

	printf("Number of characters = %d", copied_chars);

	return 0;
}
