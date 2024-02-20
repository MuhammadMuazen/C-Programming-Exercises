#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	int rand_num, input;

	printf("Guess the number (1 to 10): ");
	scanf("%d", &input);

	srand(time(NULL));

	rand_num = rand() % 10 + 1;

	if(rand_num == input)
		printf("That is correct!\n");
	else if(rand_num > input) 
		printf("The number is higher!\n");
	else if(rand_num < input)
		printf("The number is lower!\n");
	
	return 0;
}
