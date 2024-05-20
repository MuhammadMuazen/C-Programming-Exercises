#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int terms;
    int i;
    double sum = 0;

    printf("Input the value of x: ");
    scanf("%lf", &x);

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    printf("The values of the series:\n");
    int sign = 1;
    for (i = 0; i < terms; i++) {
        int power = 2 * i + 1;
        double term = pow(x, power) * sign;

        printf("%.0lf\n", term);

        sum += term;
        sign = -sign;
    }

    printf("The sum = %.0lf\n", sum);

    return 0;
}
