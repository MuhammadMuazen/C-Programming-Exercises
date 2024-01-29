#include <stdio.h>
#include <stdlib.h>

void hashtags_print(int num);

int main(void) {

    int num_nums;

    //get the number of lines
    printf("Input number of histogram bar (Maximum 10): ");
    scanf("%d", &num_nums);

    if(num_nums > 10 || num_nums < 0) {
        printf("Please enter a valid value!\n");
        exit(-1);
    }

    //get the numbers of # in every line
    int size = num_nums;
    int nums[size];

    printf("Input the values between 0 and 10: \n");

    for(register int i = 0; i < size; i++) {
        scanf("%d", &nums[i]);
        if(nums[i] > 10 || num_nums < 0) {
            printf("Please enter a valid value!\n");
            exit(-1);
        }
    }

    printf("\nHistogram:\n");

    for(register int i = 0; i < size; i++) 
        hashtags_print(nums[i]);

    return 0;
}

void hashtags_print(int num) {
    //+1 for null terminator
    char hashtags[num + 1];

    for(register int i = 0; i < num; i++){
        hashtags[i] = '#';
    }

    //null terminate the string
    hashtags[num] = '\0';
    
    printf("%s\n", hashtags);
}