#include <stdio.h>

int main(void){
	int height = 7;
	int width = 5;
	int perimeter = 2 * (height + width);
	int area = height * width;
	print("Perimeter of the rectangle = %d\n", perimeter);
	printf("Area of the rectangle = %d\n", area);
	return 0;
}
