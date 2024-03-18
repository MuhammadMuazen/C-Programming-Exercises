#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand(time(NULL));

	int num;

	do {	
		int rand_num = rand() % 50 + 1;
		
		printf("Guess The number (1 - 100): ");
		scanf("%d", &num);
		
		if(num == rand_num) {
			printf("Correct! Your num %d, Random num %d\n", num, rand_num);
			break;
		}
		else if(num != rand_num)
			printf("Wrong! Your num %d, Random num %d\n", num, rand_num);
	} while(1);

	return 0;
}
