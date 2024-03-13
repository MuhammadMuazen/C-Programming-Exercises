#include <stdio.h>
#include <ctype.h>

int main() {

	char c;

	printf("Input a character: ");
	scanf("%c", &c);

	c = tolower(c);

	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		printf("The alphabet is a vowel.\n");
	else
		printf("The alphabet is a consonant.\n");

	return 0;
}
