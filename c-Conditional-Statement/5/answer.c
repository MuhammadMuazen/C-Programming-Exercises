#include <stdio.h>

int main(void) {

	int age;

	printf("Input your age: ");
	scanf("%d", &age);

	if(age >= 18)
		printf("Congratulation! You are eligible for casting your vote.\n");
	else
		printf("You can't vote!\n");

	return 0;
}
