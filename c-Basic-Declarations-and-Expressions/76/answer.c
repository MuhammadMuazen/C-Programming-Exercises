#include <stdio.h>

int main(void) {

	printf("Number Square Cube\n");
	printf("=========================\n");

	for(int i = 0; i <= 20; i++)
		printf("%d %d %d\n", i, i*i, i*i*i);
	
	return 0;
}
