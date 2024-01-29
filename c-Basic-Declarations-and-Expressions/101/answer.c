#include <stdio.h>

int main(void) {

    float input_num;

    printf("Input a number: ");
    scanf("%f", &input_num);

    if(input_num >= 0 && input_num <= 30)
        printf("Range [0, 30]\n");
    else if(input_num > 30 && input_num <= 50)
        printf("Range [31, 50]\n");
    else if(input_num > 50 && input_num <= 80)
        printf("Range [51, 80]\n");
    else if(input_num > 80 && input_num <= 100)
        printf("Range [81, 100]\n");
    else
        printf("Out of specified ranges!\n");

    return 0;
}