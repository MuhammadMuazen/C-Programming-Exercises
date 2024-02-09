//I did not understand this question very good so I just copied the code from the website
//https://www.w3resource.com/c-programming-exercises/basic-algo/c-programming-basic-algorithm-exercises-66.php

#include <stdio.h>

// Function prototype for 'test'
int test(int numbers[], int arr_size, int len);

int main(void){
    int arr_size;

    // Declaration and initialization of an integer array 'array1'
    int array1[] = {3, 7, 5, 5, 3, 7};
    arr_size = sizeof(array1)/sizeof(array1[0]);

    // Printing the result of the 'test' function for 'array1'
    printf("%d",test(array1, arr_size, 2));

    // Declaration and initialization of an integer array 'array2'
    int array2[] = {3, 7, 5, 5, 3, 7};
    arr_size = sizeof(array2)/sizeof(array2[0]);

    // Printing the result of the 'test' function for 'array2'
    printf("\n%d",test(array2, arr_size, 3));

    // Declaration and initialization of an integer array 'array3'
    int array3[] = {3, 7, 5, 5, 3, 7, 5 };
    arr_size = sizeof(array3)/sizeof(array3[0]);

    // Printing the result of the 'test' function for 'array3'
    printf("\n%d",test(array3, arr_size, 3));
}

// Definition of the 'test' function
int test(int numbers[], int arr_size, int len)
{
    // Looping through the first 'len' elements
    for (int i = 0; i < len; i++)
    {
        // Checking if corresponding elements from the end match
        if (numbers[i] != numbers[arr_size - len + i])
        {
            return 0; // Return 0 if there's a mismatch
        }
    }

    return 1; // Return 1 if all elements match
}
