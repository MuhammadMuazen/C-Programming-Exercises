#include <stdio.h>

int main() {

	int c = 0;

	printf("Input characters: On Linux systems and OS X EOF is CTRL+D. For Windows EOF is CTRL+Z.\n");

	for(;getchar() != EOF;) {
		c++;
	}

	printf("\nNumber of Characters: %d\n", c);

	return 0;
}
