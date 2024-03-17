#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

	int num;

	srand(time(NULL));

	while(1) {
		
		int random_num = rand() % 20 + 1;

		printf("Guess the random number: ");
		scanf("%d", &num);

		if(num == random_num) {
			printf("Correct! Your Input %d, random num %d\n", num, random_num);
			break;
		}
		else
			printf("Wrong! Your Input: %d, random num %d\n", num, random_num);
	}

	return 0;
}
		
