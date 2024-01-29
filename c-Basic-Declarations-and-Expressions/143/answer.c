#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *a, const void *b);

int main(void) {

	char in_num[9] = {0}, sorted_in[9] = {0};

	printf("Input an integer created by 8 numbers (0 to 9):\n");
	scanf("%s", in_num);

	//copy the input array
	strcpy(sorted_in, in_num);

	//sort the array in a desecending order
	qsort(sorted_in, strlen(sorted_in), sizeof(char), compare);

	int input_int = atoi(in_num);
	int sorted_int = atoi(sorted_in);
	
	printf("The difference between the largest integer and the smallest integer.\n");
	
	if(input_int > sorted_int)
		printf("%d - %d = %d", input_int, sorted_int, input_int - sorted_int);
	else
		printf("%d - %d = %d", sorted_int, input_int, sorted_int - input_int);

	return 0;
}


int compare(const void *a, const void *b) {
	return (*(char *)b - *(char *)a);
}