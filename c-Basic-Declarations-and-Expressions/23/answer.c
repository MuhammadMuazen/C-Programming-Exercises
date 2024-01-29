#include <stdio.h>

int main(void){

	float a, b, c;
	int valid = 0;

	printf("Input the first number: ");
	scanf("%f", &a);
	printf("Input the second number: ");
	scanf("%f", &b);
	printf("Input the third number: ");
	scanf("%f", &c);

	if(a + b > c && a + c > b && b + c > a)
		valid++;

	if(valid) {
		float perimeter = a + b + c;
		printf("Perimeter = %.2f\n", perimeter);
	}

	return 0;
}
