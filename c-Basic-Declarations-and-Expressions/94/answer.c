#include <stdio.h>

int main(void) {

    double weight, height;

    printf("Input the weight: ");
    scanf("%lf", &weight);
    printf("Input the height: ");
    scanf("%lf", &height);

    double bmi = weight / (height * height);

    printf("BMI = %lf\n\n", bmi);

    if(bmi < 18.5)
        printf("Grade: Underweight\n");
    else if(bmi >= 18.5 && bmi <= 24.9)
        printf("Grade: Normal weight\n");
    else if(bmi >= 25 && bmi <= 29.9)
        printf("Grade: Overweight\n");
    else
        printf("Grade: Obesity\n");

    return 0;
}