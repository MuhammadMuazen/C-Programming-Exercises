#include <stdio.h>

int main(void) {

	int x, y, z;

	printf("x = ");
	scanf("%d", &x);
	printf("y = ");
	scanf("%d", &y);
	printf("z = ");
	scanf("%d", &z);

	if((y > x) && (z > y)) 
		printf("%d", 1);
	else
		printf("%d", 0);

	return 0;
}
