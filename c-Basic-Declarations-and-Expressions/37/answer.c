#include <stdio.h>

int main(void){

	float x, y;

	printf("x: ");
	scanf("%f", &x);
	printf("y: ");
	scanf("%f", &y);

	if(x > 0 && y > 0)
		printf("Quadrant-I(+,+)\n");
	else if(x < 0 && y > 0)
		printf("Quadrant-II(-,+)\n");
	else if(x < 0 && y < 0)
		printf("Quadrant-III(-,-)\n");
	else if(x > 0 && y < 0)
		printf("Quadrant-IV(+,-)\n");
	else
		printf("Center(0,0)\n");

	return 0;
}
