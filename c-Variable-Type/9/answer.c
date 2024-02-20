#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("The set path is: ");

	const char* s = getenv("PATH");

	printf("%s\n", (s != NULL) ? s : "getenv returned NULL\n");

	return 0;
}
