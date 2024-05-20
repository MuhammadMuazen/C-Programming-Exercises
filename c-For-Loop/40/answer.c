//answer from: https://www.w3resource.com/c-programming-exercises/for-loop/c-for-loop-exercises-40.php


#include <stdio.h> // Include the standard input/output header file.

int main() 
{
   int i, j; // Declare variables for iteration.
   char alph = 'A'; // Initialize a character variable to 'A'.
   int n, blk; // Declare variables for user input and block counter.
   int ctr = 1; // Initialize a counter.

   printf("Input the number of Letters (less than 26) in the Pyramid : ");
   scanf("%d", &n); // Prompt user for input and store it in variable 'n'.

   for (i = 1; i <= n; i++) // Outer loop for rows.
   {
       for(blk = 1; blk <= n - i; blk++) // Loop to print spaces before letters.
           printf("  ");

       for (j = 0; j <= (ctr / 2); j++) // Loop to print letters in ascending order.
       {
           printf("%c ", alph++);
       }

       alph = alph - 2; // Decrement the character after printing half.

       for (j = 0; j < (ctr / 2); j++) // Loop to print letters in descending order.
       {
           printf("%c ", alph--);
       }

       ctr = ctr + 2; // Increment the counter for the next row.
       alph = 'A'; // Reset the character to 'A' for the next row.

       printf("\n"); // Move to the next line after printing a row.
   }
    return 0;  // Indicate that the program has executed successfully.
}

