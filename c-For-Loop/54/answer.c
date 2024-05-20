//answer from: https://www.w3resource.com/c-programming-exercises/for-loop/c-for-loop-exercises-54.php

#include <stdio.h> 
#include <math.h>

int main() {
    // Declare variables
    long int n1, n5, p = 1;
    long int dec = 0, i;
    long int binno = 0;
    // Print output headers
    printf("\n\nConvert Octal to Binary:\n");
    printf("-------------------------\n");
    // Get octal input
    printf("Input an octal number (using digits 0 - 7): ");
    scanf("%ld", &n1);
    // Store input number
    n5 = n1;
    // Convert octal to decimal
    // Loop through each octal digit using a for loop
    for (i = 0; n1 > 0; n1 = n1 / 10, i++) {
        // Get current digit
        long int d = n1 % 10;
        // Update power of 8
        p = pow(8, i);
        // Add digit * power of 8 to result
        dec += d * p;
    }
    // Convert decimal to binary
    // Loop through each binary digit using a for loop
    for (i = 1; dec > 0; dec = dec / 2, i *= 10) {
        // Get remainder and add to result
        binno += (dec % 2) * i;
    }
    // Print octal and binary result
    printf("\nThe Octal Number: %ld\nThe equivalent Binary Number: %ld\n\n", n5, binno);
    return 0; // Indicate successful completion of the program
}

