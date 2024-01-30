#include <stdio.h>

#define MAX_LEN 100

//check if the element we add to the result array is already in it
int already_in_array(int arr[], int size, int num) {
    for(int i = 0; i < size; i++) {
        if(num == arr[i])
            return 0;
    }
    return 1;
}

//print the result array
void print_result(int res[], int size) {
    printf("Common elements: ");
    for (int i = 0; i < size; i++) {
        if (res[i] != 0) {
            printf("%d ", res[i]);
        }
    }
    printf("\n");
}

//check what the the repeated elements in both arrays
void repeated_elements(int a1[], int a2[], int size1, int size2) {

    int res[MAX_LEN] = {0};
    int index = 0;

    for(int i = 0; i < size1 && index < MAX_LEN; i++) {
        for(int j = 0; j < size2 && index < MAX_LEN; j++) {
            if(a1[i] == a2[j] && already_in_array(res, sizeof(res)/sizeof(int), a2[j])) {
                res[index++] = a2[j];
            }
        }
    }

    print_result(res, sizeof(res)/sizeof(int));
}

int main(void) {

    int size1, size2;

    printf("Input the size of the first array and then the second array:\n");
    scanf("%d%d", &size1, &size2);

    if(size1 <= 0 || size2 <= 0) {
        printf("Please input a vlaid size!\n");
        return 1;
    }

    int arr1[size1], arr2[size2];

    printf("Input the elements of the first array:\n");
    for(int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
        if(arr1[i] <= 0) {
            printf("The elements must be bigger than zero!\n");
            return 1;
        }
    }

    printf("Input the elements of the second array:\n");
    for(int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
        if(arr2[i] <= 0) {
            printf("The elements must be bigger than zero!\n");
            return 1;
        }
    }

    repeated_elements(arr1, arr2, size1, size2);

    return 0;
}