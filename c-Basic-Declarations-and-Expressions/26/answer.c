#include <stdio.h>

int main(void) {

	register int i;
	
	for(i = 0; i <= 50; i++)
		if(i % 2 == 0)
			printf("%d ", i);

	return 0;
}
