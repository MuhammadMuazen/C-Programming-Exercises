#include <stdio.h>

int main() {

	int terms = 0;
	int t1 = 0, t2 = 1;
	int next_term = t1 + t2;

	printf("Input the number of terms to display: ");
	scanf("%d", &terms);

	printf("Here is the Fibonacci series upto %d terms\n", terms);
	
	printf("%d %d ", t1, t2);

	for(int i = 3; i <= terms; i++) {
		printf("%d ", next_term);
		t1 = t2;
		t2 = next_term;
		next_term = t1 + t2;
	}

	return 0;
}
