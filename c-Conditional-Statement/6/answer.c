#include <stdio.h>

int main(void) {

	int m;

	printf("Input Data: ");
	scanf("%d", &m);
	
	int n = 0;

	if(m > 0)
		n = 1;
	else if(m < 0)
		n = -1;
	else
		n = 0;

	printf("The value of n = %d", n);

	return 0;
}
