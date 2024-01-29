#include <stdio.h>

int main(void) {

	int input_mark, sum_of_marks = 0, num_of_marks = 0;
	
	printf("Input Mathematics marks (0 to terminate): ");
	
	while(1) {
		scanf("%d", &input_mark);
		
		if(input_mark <= 0)
			break;
		
		sum_of_marks += input_mark;
		num_of_marks++;
	}

	float math_average = (float)sum_of_marks / num_of_marks;

	printf("Average marks in Mathematics: %.2f\n", math_average);

	return 0;
}
