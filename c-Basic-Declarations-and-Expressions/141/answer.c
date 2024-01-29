#include <stdio.h>

// Recursive function to find combinations
int combination(int n, int s, int a) {
    int i, result = 0;

    // Base case: if n is 1, check if s is within valid range
    if (n == 1) {
        if (s >= a && s <= 9) {
            return 1;
        } else {
            return 0;
        }
    }

    // Iterate through possible values (a to 9)
    for (i = a; i <= 9; i++) {
        // Recursively call combination for (n-1) and adjust s and a values
        result += combination(n - 1, s - i, i + 1);
    }

    return result; // Return the total combinations
}

int main(void) {
    int n, s;

    printf("Input the number: ");
    scanf("%d", &n);
    printf("Sum of the digits: ");
    scanf("%d", &s);

    if (n != 0 && s != 0) {
        printf("Number of combinations: %d\n", combination(n, s, 0));
    }

    return 0;
}
