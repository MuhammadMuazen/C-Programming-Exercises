#include <stdio.h>
#include <stdlib.h>

int main(void) {

	FILE *file; 

	file = fopen("NonExit.txt", "r");

	if(file == NULL) { 
		fputs("File does not exist or error, in opening the file.\n", stderr);
		abort();
	}

	fclose(file);

	return 0;
}
