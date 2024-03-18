#include <stdio.h>
#include <string.h>

int main() {

	char password[] = "password";
	char input_pass[64];

	do {
		printf("Input the password: ");
		fgets(input_pass, sizeof(input_pass), stdin);

		input_pass[strcspn(input_pass, "\n")] = '\0';

		if(strcmp(password, input_pass) == 0) {
			printf("Correct Password!\n");
			break;
		}

		printf("Wrong Passwod! Try again..\n");
	} while(1);

	return 0;
}
