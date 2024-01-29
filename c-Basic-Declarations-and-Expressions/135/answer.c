#include <stdio.h>

int main(void) {

	int n;

	printf("Input a number: ");
	scanf("%d", &n);

	if(n < 1 || n > 50) {
		printf("input should be 1 <= n <= 50\n");
		return 1;
	}

	int count = 0;

	for(int i = 0; i <= 9; i++) 
		for(int j = 0; j <= 9; j++)
			for(int k = 0; k <= 9; k++)
				for(int l = 0; l <= 9; l++)
					if(i + j + k + l == n) {
						printf("\n%d, %d, %d, %d", i, j, k, l);
						count++;
					}
	printf("\n\nTotal number of combinations: %d\n", count);
	
	return 0;
}
