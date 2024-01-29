#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	int sides;

	printf("Input the size of the square (1-10): ");
	scanf("%d", &sides);

	if(sides > 10 || sides < 1) {
		printf("Please enter a valid value (1-10)!\n");
		exit(-1);
	}
	
	char full_out[11] = "";
	char part_out[11] = "";

	for(register int i = 1; i <= sides; i++)
		strcat(full_out, "#");

	for(register int i = 1; i <= sides; i++) {
		if(i == 1 || i == sides)
			strcat(part_out, "#");
		else
			strcat(part_out, " ");
	}

	for(register int i = 1; i <= sides; i++) {
		if(i == 1 || i == sides) 
			printf("%s\n", full_out);
		else 
			printf("%s\n", part_out);
	}

	return 0;
}
