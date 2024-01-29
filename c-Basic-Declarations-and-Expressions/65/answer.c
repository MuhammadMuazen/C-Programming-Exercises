#include <stdio.h>

int is_prime(int);

int main(void) {

	int char_num = 0;
	register int i;

	for(i = 2; i <= 200; i++) {
		if(char_num == 10) {
			printf("\n");
			char_num = 0;
		}

		if(is_prime(i) && char_num != 10) {
			printf("%d ", i);
			char_num++;
		}
	}
	
	return 0;
}

int is_prime(int num) {
	register int j;

	for(j = 2; j < (num / 2) + 1; j++)
		if(num % j == 0) 
			return 0;
	return 1;
}
