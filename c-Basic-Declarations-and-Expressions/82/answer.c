#include <stdio.h>

int main(void) {

	char num[5];

	printf("Input a five-digit number: ");
	scanf("%s", &num);

	if(num[0] == num[4] && num[1] == num[3])
		printf("%s is a palindrome.\n", num);
	
	return 0;
}
