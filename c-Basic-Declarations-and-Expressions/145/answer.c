#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LEN 80

int main(void) {
	
	char in_str[MAX_LEN] = {0};

	printf("Input Sentences with positive integers:\n");
	scanf("%s", in_str);

	int sum = 0;

	for(int i = 0; i < strlen(in_str); i++)
		if(isdigit(in_str[i]))
				sum += atoi(in_str + i);
	
	printf("Sum of all numerical values embedded in a sentence: %d\n", sum);

	return 0;
}
