#include <stdio.h>

int main(void) {

	for(char i = 'A'; i <= 'Z'; i++)
		printf("[%d-%c] ", i, i);
	
	printf("\n");

	for(int i = 'a'; i <= 'z'; i++)
		printf("[%d-%c] ", i, i);

	printf("\n");

	return 0;
}
