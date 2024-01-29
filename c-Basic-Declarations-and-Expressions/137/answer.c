#include <stdio.h>

// Function to calculate the outer product of two vectors
double check_outer_product(double X1, double Y1, double X2, double Y2) {
  return X1 * Y2 - X2 * Y2;
}

int main() {
    double x[3], y[3], xp, yp, cop1, cop2, cop3;

    printf("Input three points to form a triangle:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2]);

    printf("\nInput the point to check if it is inside the triangle or not:\n");
    scanf("%lf %lf", &xp, &yp);

    cop1 = check_outer_product(x[1] - x[0], y[1] - y[0], xp - x[0], yp - y[0]);
    cop2 = check_outer_product(x[2] - x[1], y[2] - y[1], xp - x[1], yp - y[1]);
    cop3 = check_outer_product(x[0] - x[2], y[0] - y[2], xp - x[2], yp - y[2]);

    //Checking if the point is inside or outside the triangle
    if (((cop1 > 0.0) && (cop2 > 0.0) && (cop3 > 0.0)) || ((cop1 < 0.0) && (cop2 < 0.0) && (cop3 < 0.0)))
    printf("The point is inside the triangle!");
    else
        printf("The point is outside the triangle!");

    return 0;
}