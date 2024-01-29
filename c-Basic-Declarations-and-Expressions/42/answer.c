#include <stdio.h>

int main(void) {

	int input_num;

	printf("Input the number of lines: ");
	scanf("%d", &input_num);

	register int i;
	for(int i = 1; i <= input_num; i++)
		printf("%d %d %d\n", i, i*i, i*i*i);

	return 0;
}
