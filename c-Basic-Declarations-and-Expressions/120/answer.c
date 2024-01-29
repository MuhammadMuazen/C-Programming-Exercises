#include <stdio.h>

int main(void) {

	int in_num;
	
	printf("Input a number(integer):\n");
	scanf("%d", &in_num);

	if(in_num <= 0) {
		printf("Please enter a valid value!\n");
		return 1;
	}

	printf("Sequence:\n");
	for(register int i = 1; i < in_num; i++) 
		printf("%d,", i);

	printf("%d", in_num);
	
	return 0;
}
