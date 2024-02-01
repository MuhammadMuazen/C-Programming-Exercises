#include <stdio.h>

int main(void) {

	int n1, n2;

	printf("Input two numbers:\n");
	scanf("%d%d", &n1, &n2);

	if((n1 >= 40 && n1 <= 50) && (n2 >= 40 && n2 <= 50))
		printf("Range: [40-50]\n");
	else if((n1 >= 50 && n1 <= 60) && (n2 >= 50 && n2 <= 60))
		printf("Range: [50-60]\n");
	else 
		printf("%d", 0);

	return 0;
}
