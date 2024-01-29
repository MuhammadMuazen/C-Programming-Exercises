#include <stdio.h>

int main(void) {

	int x, y;

	printf("Input two pairs values (integer values):\n");
	scanf("%d%d", &x, &y);

	if(x > y)
		printf("Ascending order\n");
	else
		printf("Descending order\n");

	return 0;
}
