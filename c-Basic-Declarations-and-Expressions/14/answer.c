#include <stdio.h>

int main(void){
	
	int distance; 
	float fuel;

	printf("Input total distance in km: ");
	scanf("%d", &distance);
	printf("Input total fuel spent in liters: ");
	scanf("%f", &fuel);

	if(fuel) {
		float average_consumption = distance / fuel;
		printf("Average consumption (km/lt) %f\n", average_consumption);
	}

	return 0;
}
