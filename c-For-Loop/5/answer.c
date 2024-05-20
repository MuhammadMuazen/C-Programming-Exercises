#include <stdio.h>

int main() {

	int num = 0;

	printf("Input number of terms: ");
	scanf("%d", &num);

	for(int i = 1; i <= num; i++)
		printf("Number is: %d and cube of %d is: %d\n", i, i, i*i*i);

	return 0;
}
