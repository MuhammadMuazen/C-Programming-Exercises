#include <stdio.h>

int main(void){
	int days;
	puts("Number of days: ");
	scanf("%d", &days);
	
	int years = (int) days/365;
	int weeks = (int) days/7;
	
	printf("Years: %d\n", years);
	printf("Weeks: %d\n", weeks);

	return 0;
}
	
