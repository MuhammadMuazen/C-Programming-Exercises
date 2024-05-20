#include <stdio.h>

int is_armstrong(int num) {
	int r = 0, sum = 0;
	int temp = num;

	for(int i = num; num != 0; num /= 10) {
		r = num % 10;
		sum += r * r * r;
	}

	if(sum == temp)
		return 1;
	return 0;
}


int main() {

	int fnum = 0, snum = 0;

	printf("Input starting number of range: ");
	scanf("%d", &fnum);
	printf("Input ending number of range: ");
	scanf("%d", &snum);

	printf("Armstrong numbers in given range are: ");
	
	for(int i = fnum; i <= snum; i++)
		if(is_armstrong(i))
			printf("%d ", i);

	return 0;
}
