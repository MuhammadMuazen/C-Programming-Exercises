#include <stdio.h>

int main(void) {
    int in_nums[3];

    printf("Input three integers:\n");
    scanf("%d%d%d", &in_nums[0], &in_nums[1], &in_nums[2]);

    int min = in_nums[0];
    int max = in_nums[0];
    int between = 0;

    for(int i = 0; i < 3; i++) {
        if(min > in_nums[i])
            min = in_nums[i];
        if(max < in_nums[i])
            max = in_nums[i];
    }

    for(int i = 0; i < 3; i++) {
        if(in_nums[i] != min && in_nums[i] != max)
            between = in_nums[i];
    }

    printf("(%d, %d, %d) --> %d", in_nums[0], in_nums[1], in_nums[2], between);
    
    return 0;
}