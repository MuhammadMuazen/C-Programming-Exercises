#include <stdio.h>
#include <string.h>

int main(void) {

	int input_password;

	printf("Input the password: ");
	scanf("%d", &input_password);
	
	if(input_password == 1234)
		printf("Correct password\n");
	else
		printf("Incorrect password\n");

	return 0;
}
