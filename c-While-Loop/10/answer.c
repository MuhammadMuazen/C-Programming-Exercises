#include <stdio.h>

int main() {

	int  t1 = 0, t2 = 1;
	int next_turn = t1 + t2;
	int i = 10;

	printf("Fibonacci Series: %d %d ", t1, t2);

	while(i >= 3) {
		printf("%d ", next_turn);
		t1 = t2;
		t2 = next_turn;
		next_turn = t1 + t2;
		i--;
	}
	
	return 0;
}

