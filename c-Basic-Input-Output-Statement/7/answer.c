#include <stdio.h>
#include <string.h>

int main(void) {

	char fname[100];
	char lname[100];
	int year_birth;

	printf("Input your first name: ");
	fgets(fname, sizeof(fname), stdin);
	printf("Input the last name: ");
	fgets(lname, sizeof(lname), stdin);
	printf("Input your year of birth: ");
	scanf("%d", &year_birth);

	fname[strcspn(fname, "\n")] = '\0';
	lname[strcspn(lname, "\n")] = '\0';

	printf("%s %s %d", fname, lname, year_birth);

	return 0;
}
