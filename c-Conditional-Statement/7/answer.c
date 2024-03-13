#include <stdio.h>

int main(void) {

	int height;

	printf("Input height: ");
	scanf("%d", &height);

	if(height <= 147)
		printf("The person is Dwarf.\n");
	else if(height >= 213)
		printf("The person is giant.\n");
	else if(height > 147 && height < 213)
		printf("The person height is normal.\n");
	else
		printf("Error!\n");

	return 0;
}
