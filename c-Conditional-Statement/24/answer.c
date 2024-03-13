#include <stdio.h>

int main() {

	int month;

	printf("Input the numebr of the month: ");
	scanf("%d", &month);

	if(month == 11 || month == 4 || month == 6 || month == 9)
		printf("Month Have 30 days\n");
	else if(month == 2)
		printf("Month have 28 / 29 days\n");
	else
		printf("Month have 31 days\n");

	return 0;
}
