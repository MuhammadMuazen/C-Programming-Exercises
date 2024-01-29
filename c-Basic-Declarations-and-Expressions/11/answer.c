#include <stdio.h>

int main(void){
	float weight_item1, weight_item2;
	int num_item1, num_item2;
	
	printf("Weight - Item1: ");
	scanf("%f", &weight_item1);
	printf("No. of item1: ");
	scanf("%d", &num_item1);
	printf("Weight - Item2: ");
	scanf("%f", &weight_item2);
	printf("No. of item2: ");
	scanf("%d", &num_item2);

	float result = ((weight_item1 * num_item1) + (weight_item2 * num_item2)) / (num_item1 + num_item2);

	printf("Average Value = %f\n", result);

	return 0;
}
