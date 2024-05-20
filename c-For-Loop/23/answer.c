
#include <stdio.h>

int main() {
    float x, sum = 1, no_row = 1;
    int i, n;

    printf("Input the value of x: "); 
    scanf("%f", &x); 
    printf("Input number of terms: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++)
    {
        no_row = no_row * x / (float)i;
        sum = sum + no_row;
    }

    printf("\nThe sum is: %f\n", sum);
    
    return 0;
}

