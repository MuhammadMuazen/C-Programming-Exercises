#include <stdio.h>

int main() {
    int number, originalNumber, reversedNumber = 0, remainder;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    originalNumber = number;
    
    // Reversing the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    
    // Checking if the number is a palindrome
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }
    
    return 0;
}
