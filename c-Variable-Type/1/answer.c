#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_LEN 64

int main(void) {

	char command[MAX_LEN];

	printf("Input the command: ");
	fgets(command, MAX_LEN, stdin);
	
	//remove the new line char from the fgets input
	command[strcspn(command, "\n")] = '\0';
	
	if(system(NULL)) {
		printf("Command processor available!\n");
		printf("Executing command %s\n", command);
	}
	else {
		printf("Command processor not available!\n");
		return 1;
	}

	int return_code = system(command);

	if(!return_code) {
		printf("Return Value is: %d\n", return_code);
	}
	else {
		printf("\nError\n");
		printf("Return Value is: %d\n", return_code);
	}

	return 0;
}
