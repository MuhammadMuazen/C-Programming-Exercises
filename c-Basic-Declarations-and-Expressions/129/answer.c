#include <stdio.h>

int main(void) {

    float arr[10], in_num;

    printf("Input a number: ");
    scanf("%f", &in_num);

    arr[0] = in_num;
    for(register int i = 1; i < 10; i++){
        in_num = in_num / 3;
        arr[i] = in_num;
    }

    printf("\nArray elements:\n");
    for(register int i = 0; i < 10; i++)
        printf("array_num[%.0f] = %.4f\n", (float)i, arr[i]);

    return 0;
}