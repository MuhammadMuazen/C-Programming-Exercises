#include <stdio.h>

int main(void) {

	int n1, n2;

	printf("Input two positive numbers:\n");
	scanf("%d%d", &n1, &n2);

	if(n1 < 0 || n2 < 0) {
		printf("Numbers must be bigger than zero!\n");
		return 1;
	}

	if((n1 >= 20 && n1 <= 30) || (n2 >= 20 && n2 <= 30)) {
		if(n1 >= n2)
			printf("The largest value is: %d", n1);
		else if(n2 > n1)
			printf("The largest value is: %d", n2);
	}
	else 
		printf("%d", 0);

	return 0;
}


