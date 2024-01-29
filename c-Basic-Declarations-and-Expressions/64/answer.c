#include <stdio.h>

int main(void) {

	int num, pos = 0, max = 0, min = 0, sum = 0;
	double avg = 0;

	printf("Input a positive integer: ");
	scanf("%d", &num);

	if(num > 0) {
		pos ++;
		max = num;
		min = num;
		sum += num;
		while(1) {
			printf("Input next positive integer: ");
			scanf("%d", &num);
			if(num > 0) {
				pos ++;
				sum += num;
				if(max < num)
					max = num;
				if(min > num)
					min = num;
			}
			else
				break;
		}

		avg = (double)sum/pos;

		printf("Number of positive values entered is %d\n", pos);
		printf("Maximum value entered is %d\n", max);
		printf("Minimum value entered is %d\n", min);
		printf("Average value is %lf\n", avg);
	}

	return 0;
}
