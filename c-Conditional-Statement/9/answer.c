#include <stdio.h>

int main(void) {

	int x, y;

	printf("Input the x of the point: ");
	scanf("%d", &x);
	printf("Input the y of the point: ");
	scanf("%d", &y);

	if(x > 0 && y > 0)
		printf("The coordinate point (%d,%d) lies in the First quadrant.\n", x, y);
	if(x < 0 && y > 0)
		printf("The coordinate point (%d,%d) lies in the Second quadrant.\n", x, y);
	if(x < 0 && y < 0)
		printf("The coordinate point (%d,%d) lies in the Third quadrant.\n", x, y);
	if(x > 0 && y < 0)
		printf("The coordinate point (%d,%d) lies in the Fourth quadrant.\n", x, y);
	else if(x == 0 && y == 0)
		printf("The point (%d,%d) is the center!\n", x, y);

	return 0;
}
