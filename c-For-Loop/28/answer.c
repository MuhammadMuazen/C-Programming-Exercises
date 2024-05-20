#include <stdio.h>

int perfect_num(int num) {
	int sum = 0;

	for(int i = 1; i < num; i++) 
		if(num % i == 0) 
			sum += i;

	if(sum == num)
		return 1;
	return 0;
}

int main() {
	
	int fnum = 0, snum = 0;

	printf("Input the starting range or number: ");
	scanf("%d", &fnum);
	printf("Input the ending range of number: ");
	scanf("%d", &snum);

	printf("The Perfect numbers within the given range: ");
	for(int i = fnum; i <= snum; i++)
		if(perfect_num(i))
			printf("%d ", i);

	return 0;
}

