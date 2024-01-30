#include <stdio.h>

int main(void) {

    int n;

    printf("Input the number of elements:\n");
    scanf("%d", &n);
    if(n <= 0) {
        printf("The number must be bigger than zero!\n");
        return 1;
    }

    int arr[n];
    
    printf("Input the elements:\n");
    for(int i = 0; i < n; i++) 
        scanf("%d", &arr[i]);

    int max = arr[0];
    int sum_before_max = 0;

    for(int i = 0; i < n; i++) {
        sum_before_max += arr[i];
        if(max < arr[i])
            max = arr[i];
    }

    int sum_after_max = sum_before_max - max;

    printf("The sum of all elements is: %d\n", sum_before_max);
    printf("The sum of all elements except the max value is: %d\n", sum_after_max);

    return 0;
}