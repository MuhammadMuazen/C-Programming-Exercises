#include <stdio.h>

double calculateHarmonicSeries(int terms) {
    double sum = 0.0;
    int i;

    for (i = 1; i <= terms; i++) {
        sum += 1.0 / i;
    }

    return sum;
}

int main() {
    int terms;

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    double sum = calculateHarmonicSeries(terms);

    printf("1/1");
    for (int i = 2; i <= terms; i++) {
        printf(" + 1/%d", i);
        if (i == terms) {
            printf(" + ");
        }
    }

    printf("\nSum of Series upto %d terms: %.6f\n", terms, sum);

    return 0;
}
