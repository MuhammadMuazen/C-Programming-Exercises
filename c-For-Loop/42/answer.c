//answer from: https://www.w3resource.com/c-programming-exercises/for-loop/c-for-loop-exercises-42.php 

#include <stdio.h> // Include the standard input/output header file.

void main()
{
    int n1, n, p=1; // Declare variables to store input and intermediate results.
    int dec=0, i=1, j, d; // Declare variables for decimal and binary conversion.

    printf("\n\n  Convert Binary to Decimal:\n "); // Print a message.
    printf("-------------------------\n"); // Print a separator.

    printf("Input a binary number :"); // Prompt the user for input.
    scanf("%d", &n); // Read the binary number from the user.
    n1 = n; // Store a copy of the original binary number.

    // Loop to convert binary to decimal.
    for (j = n; j > 0; j = j / 10)
    {  
        d = j % 10; // Get the rightmost digit.

        if (i == 1)
            p = p * 1;
        else
            p = p * 2;

        dec = dec + (d * p); // Calculate the decimal equivalent.
        i++; // Increment the position.
    }

    // Print the results.
    printf("\nThe Binary Number : %d\nThe equivalent Decimal  Number : %d \n\n", n1, dec);
}

