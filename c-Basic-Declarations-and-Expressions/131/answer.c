#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main(void) {

	char first_str[MAX_LEN], second_str[MAX_LEN];
	
	printf("Input the first string: ");
	fgets(first_str, MAX_LEN, stdin);
	printf("Input the second string: ");
	fgets(second_str, MAX_LEN, stdin);

	// Removing newline characters from strings
    	first_str[strcspn(first_str, "\n")] = '\0';
    	second_str[strcspn(second_str, "\n")] = '\0';

	long int first_str_len = strlen(first_str);
	long int sec_str_len = strlen(second_str);
	
	long int start_point = first_str_len - sec_str_len;
	
	long int count = 0;

	for(long int i = start_point, j = 0; i < first_str_len && j < sec_str_len; i++, j++) {
		if(first_str[i] == second_str[j]) { 
			count++;
		}
	}

	if(count == sec_str_len)
		printf("Present!\n");
	else 
		printf("Not present!\n");

	return 0;
}

