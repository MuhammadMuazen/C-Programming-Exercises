#include <stdio.h>

int main(void) {

	float inp_num, pos_sum = 0, neg_sum = 0, pos_avg, neg_avg;
	int pos_num = 0, neg_num = 0;
	
	printf("Input 7 numbers(int/float):\n");
	
	for(register int i = 0; i < 7; i++) {

		scanf("%f", &inp_num);
		
		if(inp_num >= 0.0) {
			pos_num++;
			pos_sum += inp_num;
		}
		else if(inp_num < 0.0) {
			neg_num++;
			neg_sum += inp_num;
		}
	}

	if(pos_num != 0)
		pos_avg = pos_sum / pos_num;
	else
		pos_avg = 0;
	
	if(neg_num != 0)
		neg_avg = neg_sum / neg_num;
	else 
		neg_avg = 0;

	printf("%d Number of positive numbers: Average %.2f\n", pos_num, pos_avg);
	printf("%d Number of negative numbers: Average %.2f\n", neg_num, neg_avg);

	return 0;
}
