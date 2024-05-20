//answer from: https://www.w3resource.com/c-programming-exercises/for-loop/c-for-loop-exercises-61.php


#include <stdio.h>   // Include the standard input/output header file. 
#include <ctype.h>
int main(void)
{
    // Variable declarations and initialization
	int chr;
	int uppercase_ctr = 0, lowercase_ctr = 0, other_ctr = 0;
    // Prompting the user for input
printf("\nInput characters: On Linux systems and OS X EOF is CTRL+D. For Windows EOF is CTRL+Z.\n");

    // Loop to process characters until EOF (End of File) is encountered
	while ((chr = getchar()) != EOF)
	{
        // Checking if the character is uppercase
		if (isupper(chr))
			uppercase_ctr++;
		// Checking if the character is lowercase
else if (islower(chr))
			lowercase_ctr++;
		// If it's not uppercase or lowercase, consider it as another character
else
			other_ctr++;
	}
	// Printing the counts of different types of characters
	printf("\nUppercase letters: %d\n", uppercase_ctr);
	printf("Lowercase letters: %d\n", lowercase_ctr);
	printf("Other characters: %d\n", other_ctr);
	return 0;
}

