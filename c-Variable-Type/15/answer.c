#include <stdio.h>
#include <stdlib.h>

void newFunctionOne(void) {
	printf("Here is the message returning from newFunctionOne.\n");
}

void newFunctionTwo(void) {
	printf("Here is the message returning from newFunctionTwo.\n");
}

int main(void) {

	atexit(newFunctionOne);
	atexit(newFunctionTwo);

	printf("This is a message from the main function\n");

	return 0;
}
