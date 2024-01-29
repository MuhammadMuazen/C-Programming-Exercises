#include <stdio.h>

int main(void) {

    int array_size;
    
    printf("Input array size:\n");
    scanf("%d", &array_size);

    if(array_size <= 0) {
        printf("Please input a valid value!\n");
        return 1;
    }

    int array_nums[array_size];

    printf("\nInput array elements:\n");
    for(register int i = 0; i < array_size; i++)
        scanf("%d", &array_nums[i]);

    int min_val = array_nums[0], min_index = 0;

    for(register int i = 1; i < array_size; i++){
        if(min_val > array_nums[i]) {
            min_val = array_nums[i];
            min_index = i;
        }
    }

    printf("Smallest value: %d\n", min_val);
    printf("Position within array: %d\n", min_index);

    return 0;
}