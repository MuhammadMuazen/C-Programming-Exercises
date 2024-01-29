#include <stdio.h>

int main(void) {

	int line_char = 0;

	printf("List of integer equivalents of letters (a-z, A-Z).\n");
	printf("====================================================\n");

	for(char c = 'a'; c <= 'z'; c++) {
		line_char++;
		if(line_char == 6) {
			printf("%d\n", c);
			line_char = 0;
		}
		else
			printf("%d ", c);
	}
	
	char space = ' ';
	printf("%d ", space);
	line_char++;

	for(char c = 'A'; c <= 'Z'; c++) {
		line_char++;
		if(line_char == 6) {
			printf("%d\n", c);
			line_char = 0;
		}
		else
			printf("%d ", c);
	}

	return 0;
}
		
