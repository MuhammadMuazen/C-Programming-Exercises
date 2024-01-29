#include <stdio.h>

int main(void) {

	int n, in_line = 0;

	printf("Input number of lines: ");
	scanf("%d", &n);
	
	register int i = 1;

	while(n) {
		in_line++;
		if(in_line != 3)
			printf("%d ", i);
		if(in_line == 3) {
			in_line = 0;
			printf("%d\n", i);
			n--;
		}
		i++;
	}

	return 0;
}

