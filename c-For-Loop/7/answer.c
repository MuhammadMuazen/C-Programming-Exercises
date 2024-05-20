#include <stdio.h>


int main() {

	int num = 0;

	printf("Input upto the table number starting from 1: ");
	scanf("%d", &num);

	printf("Multiplication table from 1 to %d\n", num);

	for(int i = 1; i <= num; i++) {
		for(int j = 1; j <= 10; j++) {
			printf("%dx%d = %d ", j, i, i * j);
		}
		printf("\n");
	}
	
	return 0;
}
