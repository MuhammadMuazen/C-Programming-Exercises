#include <stdio.h>
#include <ctype.h>

int main() {

	char grade;

	printf("Input the grade: ");
	scanf("%c", &grade);

	grade = tolower(grade);
	
	switch(grade) {
		case 'e':
			printf("You have chosen: Excellent\n");
			break;
		case 'v':
			printf("You have chosen: Very Good\n");
			break;
		case 'g':
			printf("You have chosen: Good\n");
			break;
		case 'a':
			printf("You have chosen: Average\n");
			break;
		case 'f':
			printf("You have chosen: Fail\n");
			break;
		default:
			printf("No valid grade!\n");
			break;
	}

	return 0;
}

	
