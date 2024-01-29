#include <stdio.h>

int main(void) {

	printf("Celsius to Fahrenheit\n");
	printf("---------------------\n");
	printf("Celsius	   Fahrenheit\n");

	for(register float i = 0.0; i <= 150.0; i += 10.0) 
		printf("%.1f	     %.1f\n", i, i * (9.0/5.0) + 32.0);

	printf("\n\n");
	printf("Fahrenheit to Celsius\n");
	printf("---------------------\n");
	printf("Fahrenheit  Celsius\n");

	for(register float i = 0.0; i <= 150.0; i += 10.0) 
		printf("%.1f         %.1f\n", i, ((i - 32.0) * 5.0) / 9.0); 


	return 0;
}
