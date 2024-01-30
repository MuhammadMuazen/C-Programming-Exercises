#include <stdio.h>

int main(void) {

    int n;

    printf("Length of the sequence: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("The sequence length must be bigger than zero!\n");
        return 1;
    }

    int sequence[n];
    
    printf("Input the sequence elements:\n");
    for(int i = 0; i < n; i++)
        scanf("%d", &sequence[i]);

    int current_length = 1, max_length = 1;
    int start = 0, max_start = 0;

    for(int i = 0; i < n - 1; i++) {
        if(sequence[i] < sequence[i + 1]) {
            current_length++;
        }
        else {
            if(current_length > max_length) {
                max_length = current_length;
                max_start = start;
            }
        
        current_length = 1;
        start = i + 1;
        }
    }

    if(current_length > max_length) {
        max_length = current_length;
        max_start = start;
    }

    printf("Length of longest ascending contiguous subsequence: %d [", max_length);
    for (int i = max_start; i < max_start + max_length; i++) {
        printf("%d", sequence[i]);
        if (i < max_start + max_length - 1) {
            printf(" ");
        }
    }
    printf("]\n");

    return 0;
}