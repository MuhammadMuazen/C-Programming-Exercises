#include <stdio.h>

int main(void) {

	int t1, t2;

	printf("Input the first temperature: ");
	scanf("%d", &t1);
	printf("Input the second temperature: ");
	scanf("%d", &t2);

	if(t1 < 0 && t2 > 100)
		printf("%d", 1);
	else 
		printf("%d", 0);

	return 0;
}
