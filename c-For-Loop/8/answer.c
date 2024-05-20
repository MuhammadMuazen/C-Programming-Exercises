#include <stdio.h>

int main() {

	int num = 0;

	printf("Input the number of terms: ");
	scanf("%d", &num);

	int count = 0, sum = 0;

	printf("The odd numbers are: ");

	for(int i = 1;; i++) {
		if(count == num)
			break;
		
		if(i % 2 != 0) {
			printf("%d ", i);
			sum += i;
			count++;
		}
	}
	
	printf("\nThe Sum of odd Natural Number upto %d terms: %d", num, sum);

	return 0;
}
