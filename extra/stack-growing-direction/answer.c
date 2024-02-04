#include <stdio.h>
#include <stdbool.h>

bool upordown(int *other) {
	int x;

	if(!other)
		return upordown(&x);
	else
		return &x > other;
}

int main(void) {
	printf("%s\n", upordown(NULL) ? "Up" : "Down");
	
	return 0;
}
