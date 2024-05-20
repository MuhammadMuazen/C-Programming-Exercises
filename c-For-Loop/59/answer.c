#include <stdio.h>
#include <math.h>

int is_armstrong(int num) {
    int original_num = num;
    int digits = 0;
    int sum = 0;

    for (int temp = original_num; temp != 0; temp /= 10) {
        digits++;
    }

    original_num = num;

    for (int temp = original_num; temp != 0; temp /= 10) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
    }

    if (sum == num)
        return 1;

    return 0;
}

int main() {
    int num;

    printf("Input an integer: ");
    scanf("%d", &num);

    if (is_armstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
