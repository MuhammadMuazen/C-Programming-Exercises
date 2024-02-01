#include <stdio.h>

int main(void) {

	int n1, n2, n3;

	printf("Input the three numbers:\n");
	scanf("%d%d%d", &n1, &n2, &n3);

	if((n1 >= 20 && n1 <= 50) || (n2 >= 20 && n2 <= 50) || (n3 >= 20 && n3 <= 50))
		printf("%d", 1);
	else 
		printf("%d", 0);

	return 0;
}
