#include <stdio.h>

int main(void) {

	long long x,y,z;

	printf("Input x, y, z:\n");
	scanf("%lld %lld %lld", &x, &y, &z);
	printf("Result: %lld\n", x + y + z);

	return 0;
}
