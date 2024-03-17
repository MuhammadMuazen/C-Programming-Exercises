#include <stdio.h>
#include <string.h>

int main() {
	
	char name[128];
	
	while(1) {
		printf("Input the username (at least 8 characters): ");

		fgets(name, sizeof(name), stdin);
		name[strcspn(name, "\n")] = '\0';
		
		if(strlen(name) >= 8) {
			printf("The username is: %s\n", name);
			break;
		}

		printf("The username must be at least 8 characters long\n");
	}

	return 0;
}

