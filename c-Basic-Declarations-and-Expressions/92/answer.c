#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;

	printf("Input a positive number: ");
	scanf("%d", &num);

	//check the vlaue 
	if(num < 0) {
		printf("Please input a positive number!\n");
		exit(-1);
	}

	//get the factorial
	int fact = 1;
	for(register int i = num; i > 1; i--) 
		fact *= i;
	
	//get the digit defore the zero
	int temp;

	if(fact % 10 == 0) {
		while(fact > 0) {
			temp = fact % 10;
			if(temp != 0) {
				printf("The last non-zero digit of the said factorial: %d", temp);
				break;
			}
			else
				fact = fact / 10;
		}
	}

	return 0;
}
