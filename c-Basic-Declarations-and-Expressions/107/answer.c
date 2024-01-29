#include <stdio.h>

int main(void) {

	int inp_num;

	printf("Input an integer number:\n");
	scanf("%d", &inp_num);

	int counter = 0;
	
	printf("Next 10 consecutive odd numbers:\n");
	for(register int i = inp_num + 1;; i++) {
		
		if(counter == 10) {
			counter = 0;
			break;
		}

		if(i % 2 != 0) {
			printf("%d, ", i);
			counter++;
		}
	}

	printf("\n\nNext 10 consecutive even numbers:\n");
	for(register int i = inp_num + 1;; i++) {
		
		if(counter == 10) {
			counter = 0;
			break;
		}
		
		if(i % 2 == 0) {
			printf("%d, ", i);
			counter++;
		}
	}

	return 0;
}
