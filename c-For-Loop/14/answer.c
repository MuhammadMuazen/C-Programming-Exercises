#include <stdio.h>

int main() {
    int rows = 4;
    int number = 1;
    int space, i, j;

    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("* ");
            number++;

            if (number > 10) {
                break;
            }
        }

        if (number > 10) {
            break;
        }

        printf("\n");
    }

    return 0;
}
