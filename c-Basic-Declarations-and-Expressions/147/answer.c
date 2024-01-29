#include <stdio.h>
#include <stdlib.h>

// Define a macro to ensure non-negative numbers
#define check_num(x) (x > 0 ? x : 0)

int n, result, x;

int main(void) {
	
    printf("Input a positive integer: ");
    scanf("%d", &n);

	result = 0;

	for (x = check_num(n - 2000); x <= 2000 && n >= x; x++)
		result += (1001 - abs(1000 - (n - x))) * (1001 - abs(1000 - x));
    
    printf("\nNumber of combinations of p,q,r,s: %d\n", result);
	
    return 0;
}
