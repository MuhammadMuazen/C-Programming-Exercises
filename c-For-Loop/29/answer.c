#include <stdio.h>

int main() {

	int num = 0, r = 0, sum = 0, temp = 0;
	
	printf("Input the number: ");
	scanf("%d", &num);

	for(temp = num; num != 0; num /= 10) {
		r = num % 10;
		sum += r * r * r;
	}

	if(sum == temp)
		printf("%d is an Armstrong number.\n", temp);
	else
		printf("%d is not an Armstrong number.\n", temp);

	return 0;
}
