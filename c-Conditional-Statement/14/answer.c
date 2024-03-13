#include <stdio.h>

int main(void) {
	
	int a, b, c;
	
	printf("Enter the Angles: ");
	scanf("%d%d%d", &a, &b, &c);
	
	if(a + b + c != 180) {
		printf("The angles are not valid for a triangle!\n");
		return -1;
	}

	if(a == b && a == c)
		printf("This is an equilateral triangle.\n");
	else if((a == b && a != c) || (b == c && b != a))
		printf("This is an isosceles triangle.\n");
	else if(a != b && b != c && a != c)
		printf("This is a scalene triangle.\n");

	return 0;
}
