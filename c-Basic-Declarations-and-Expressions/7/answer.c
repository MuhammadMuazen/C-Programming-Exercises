#include <stdio.h>

int main(void){
	int a = 125, b = 12345;
	long ax = 1234567890;
	short s = 4043;
	float x = 2.13459;
	double dx = 1.1415927;
	char c = 'W';
	unsigned long ux = 2541567890; 
	
	printf("a + c is %d\n", a+c);
	printf("x + c is %f\n", x + c);
	printf("dx + x is %7f\n", dx + x);
	printf("((int) dx) + ax is %d\n", (int) dx + ax);
	printf("a + x is %5f\n", a + x);
	printf("s + b is %d\n", s + b);
	printf("ax + b is %d\n", ax + b);
	printf("s + c is %d\n", s + c);
	printf("ax + c is %d\n", ax + c);
	printf("ax + ux is %lu\n", ax + ux);

	return 0;
}

