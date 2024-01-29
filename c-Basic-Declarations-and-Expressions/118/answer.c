#include <stdio.h>

int main(void) {

	int inp_mark, sum = 0;

	printf("Input five subject marks(0-100):\n");
	
	for(register int i = 0; i < 5; i++) {
		scanf("%d", &inp_mark);

		if(inp_mark < 0 || inp_mark > 100) {
			printf("Please enter a valid values (0-100)\n");
			return 1;
		}

		sum += inp_mark;
	}

	float avg = (float)sum/5;

	printf("Average marks = %.2f\n", avg);

	return 0;
}
