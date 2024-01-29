#include <stdio.h>

int main(void) {

	int a = 1, b = 100;
	
	for(register int i = 0; i <= 10; i++) {
		printf("a=%d	b=%d\n", a, b);
		a += 5;
		b -= 10;
	}

	return 0;
}
