#include <stdio.h>

int main() {

    int n;
    printf("Input number of rows/columns: ");
    scanf("%d", &n);

    int table[n][n];
    printf("Input the cell values:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d input cell values:\n", i);
        for (int j = 0; j < n; j++) {
            scanf("%d", &table[i][j]);
        }
    }

    printf("Result:\n");
    int sumRow, sumCol, total = 0;
    for (int i = 0; i < n; i++) {
        sumRow = 0;
        for (int j = 0; j < n; j++) {
            sumRow += table[i][j];
            printf("%5d ", table[i][j]);
        }
        total += sumRow;
        printf("%5d\n", sumRow);
    }

    for (int i = 0; i < n; i++) {
        printf("%5d ", sumRow);
    }
    printf("%5d\n", total);

    return 0;
}