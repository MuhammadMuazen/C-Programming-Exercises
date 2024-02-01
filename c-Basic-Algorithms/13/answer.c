#include <stdio.h>

int main(void) {

	int n1, n2;

	printf("Input two positive numbers:\n");
	scanf("%d%d", &n1, &n2);

	if(n1 < 0 || n2 < 0) {
		printf("The numbers must be positive!\n");
		return 1;
	}

	if(n1 < 10 && n2 < 10) {
		if(n1 == n2) 
			printf("%d", 1);
		else
			printf("%d", 0);
	}

	if(n1 < 10 && n2 >= 10) {
		int tmp = n2 % 10;
		
		if(tmp == n1)
			printf("%d", 1);
		else
			printf("%d", 0);
	}

	if(n2 < 10 && n1 >= 10) {
		int tmp = n1 % 10;
		
		if(tmp == n2)
			printf("%d", 1);
		else 
			printf("%d", 0);
	}

	if(n1 >= 10 && n2 >= 10) {
		if(n1 % 10 == n2 % 10) 
			printf("%d", 1);
		else 
			printf("%d", 0);
	}

	return 0;
}
