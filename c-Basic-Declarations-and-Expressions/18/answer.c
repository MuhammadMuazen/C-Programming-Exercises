#include <stdio.h>

int main(void){
	
	int input_days;

	printf("Input no. of days: ");
	scanf("%d", &input_days);
	int years = 0, months = 0, days = 0;

	while(input_days > 0){
		if(input_days >= 365){
			input_days -= 365;
			years++;
		}
		else if(input_days >= 30 && input_days < 365){
			input_days -= 30;
			months++;
		}
		else if(input_days >= 1 && input_days < 30){
			input_days -= 1;
			days++;
		}
	}

	printf("%d Year(s)\n", years);
	printf("%d Month(s)\n", months);
	printf("%d Day(s)\n", days);

	return 0;
}

