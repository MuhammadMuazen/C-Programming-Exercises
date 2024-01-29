#include <stdio.h>

int main(void) {

	int x, y, t;
	
	printf("Input the value of x & y: \n");
	scanf("%d%d", &x, &y);

	printf("Before swapping the value of x & y: %d %d\n", x, y);

	t = x;
	x = y;
	y = t;

	printf("After swapping the value of x & y: %d %d\n", x, y);

	return 0;
}
