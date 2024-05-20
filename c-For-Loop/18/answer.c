#include <stdio.h>
#include <math.h>

double calculateSeriesSum(double x, int terms) {
    double sum = 1.0;
    double term = 1.0;
    int i, j;

    for (i = 1, j = 2; i < terms; i++, j += 2) {
        term *= -1.0 * x * x / (j * (j - 1));
        sum += term;
    }

    return sum;
}

int main() {
    double x;
    int terms;

    printf("Input the Value of x: ");
    scanf("%lf", &x);

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    double sum = calculateSeriesSum(x, terms);

    printf("The sum = %.6f\n", sum);
    printf("Number of terms = %d\n", terms);
    printf("Value of x = %.6f\n", x);

    return 0;
}
