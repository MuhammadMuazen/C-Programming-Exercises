#include <stdio.h>

int main(void) {

	int year;

	printf("Input year: ");
	scanf("%d", &year);

	if(year % 4 == 0)
		printf("%d is a leap year!\n", year);
	else
		printf("%d is not a leap year!\n", year);

	return 0;
}
