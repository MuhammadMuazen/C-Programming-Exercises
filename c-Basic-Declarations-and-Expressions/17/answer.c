#include <stdio.h>

int main(void){

	int seconds;

	printf("Input seconds: ");
	scanf("%d", &seconds);

	int hours = seconds / 3600;
	seconds %= 3600;
	int minutes = seconds / 60;
	seconds %= 60;
	
	printf("There are:\n");
	printf("H:M:S - %02d:%02d:%02d", hours, minutes, seconds);

	return 0;
}
