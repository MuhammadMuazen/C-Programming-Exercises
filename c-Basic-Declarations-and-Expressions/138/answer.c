#include <stdio.h>

int main(void) {

    double x1, x2, y1, y2, x3, y3, x4, y4;

    printf("Input P(x1,y1):\n");
    scanf("%lf %lf", &x1, &y1);
    printf("\nInput Q(x2,y2):\n");
    scanf("%lf %lf", &x2, &y2);
    printf("\nInput R(x3,y3):\n");
    scanf("%lf %lf", &x3, &y3);
    printf("\nInput S(x4,y4):\n");
    scanf("%lf %lf", &x4, &y4);

    if ((x1 == x2) && (x3 == x4))
        printf("\nPQ and RS are parallel!\n");
    else if ((x1 == x2) || (x3 == x4))
        printf("\nPQ and RS are not parallel!\n");
    else if (((y1 - y2) / (x1 - x2) - (y3 - y4) / (x3 - x4)) == 0.0)
        printf("\nPQ and RS are parallel!\n");
    else
        printf("\nPQ and RS are not parallel!\n");
    return 0;

}