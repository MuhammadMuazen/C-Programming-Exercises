#include <stdio.h>

int main(void) {

	int c;

	printf("Input the temprature: ");
	scanf("%d", &c);

	if(c < 0) 
		printf("Freezing weather\n");
	else if(c >= 0 && c <= 10)
		printf("Very Cold weather\n");
	else if(c > 10 && c <= 20)
		printf("Cold weather\n");
	else if(c > 20 && c <= 30)
		printf("Normal in Temp\n");
	else if(c > 30 && c <= 40)
		printf("Its Hot\n");
	else if(c > 40)
		printf("Its Very Hot\n");

	return 0;
}
