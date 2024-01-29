#include <stdio.h>

int main(void) {
    
    int m, n, sum = 0;

    printf("Input two integers (m, n):\n");
    scanf("%d%d", &m, &n);

    if(n > m) {
	    printf("input must be n < m\n");
	    return 1;
    }
    
    for (int i = m; n > 0; i++) {
        if (i % 2 != 0) {
            sum += i;
            n--;
        }
    }

    printf("Sum of %d odd numbers starting from %d:\n", n, m);
    printf("%d\n", sum);

    return 0;
}
