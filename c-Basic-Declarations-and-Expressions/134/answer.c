#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Input the three sides of a triangle:\n");

    scanf("%d %d %d", &x, &y, &z);

    if ((x*x) + (y*y) == (z*z) || (x*x) + (z*z) == (y*y) || (y*y) + (z*z) == (x*x))
        printf("It is a right angle triangle!\n");
    else
        printf("It is not a right angle triangle!\n");

    return 0;
}