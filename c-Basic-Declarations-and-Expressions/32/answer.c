#include <stdio.h>

int main(void) {

	int num;
	
	printf("Input an integer: ");
	scanf("%d", &num);

	register int i;
	for(i = 0; i <= 100; i++)
		if(i % num == 3)
			printf("%d\n", i);

	return 0;
}
