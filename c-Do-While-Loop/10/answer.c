#include <stdio.h>

int main() {

	int num;
	int count = 0;	
	printf("Input an integer: ");
	scanf("%d", &num);

	if(num == 0)
		count = 1;
	if(num < 0)
		num = -num;

	do {
		count++;
		num = num / 10;
	} while(num != 0);

	printf("The number of digits is %d", count);

	return 0;
}
