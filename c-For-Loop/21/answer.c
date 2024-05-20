#include <stdio.h>

int main() {
    int terms;
    int i;
    unsigned long long int sum = 0;
    unsigned long long int num = 9;

    printf("Input the number of terms: ");
    scanf("%d", &terms);

    for (i = 1; i <= terms; i++) {
        printf("%llu ", num);
        sum += num;
        num = num * 10 + 9;
    }

    printf("\nThe sum of the series = %llu\n", sum);

    return 0;
}
