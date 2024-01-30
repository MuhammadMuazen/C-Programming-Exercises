#include <stdio.h>

int main(void) {

    int a, b, x;

    printf("Input A,B,X: ");
    scanf("%d,%d,%d", &a, &b, &x);

    printf("Smallest absolute value of difference between X and integers between A and B (inclusive): ");

    if (x < a)
        printf("%d\n", a);
    else if (x > b)
        printf("%d\n", b);
    else
    printf("%d\n", x);

    return 0;
}