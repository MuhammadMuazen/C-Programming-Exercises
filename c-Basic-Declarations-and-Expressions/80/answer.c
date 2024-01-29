#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int sides;

	printf("Input the size of the square (between 1 and 10): ");
	scanf("%d", &sides);

	if(sides > 10 || sides < 1) { 
		printf("Please enter a valid value (1-10)");
		exit(-1);
	}

	int size = sides * sides;
	
	for(register int i = 1; i <= size; i++) {
		if(i % sides != 0) 
			printf("# ");
		else
			printf("#\n");
	}

	return 0;
}
