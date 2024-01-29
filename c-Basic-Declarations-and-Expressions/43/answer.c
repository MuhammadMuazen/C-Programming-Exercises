#include <stdio.h>

int main(void) {

	int input_lines, input_char;

	printf("Input the number of lines: ");
	scanf("%d", &input_lines);
	printf("Number of characters in line: ");
	scanf("%d", &input_char);
	
	int printed_num = 1;

	for(register int i = 0; i < input_lines; i++) {
		for(register int j = 0; j < input_char; j++) {
			printf("%d ", printed_num);
			printed_num++;
		}
		printf("\n");
	}
	return 0;
}
