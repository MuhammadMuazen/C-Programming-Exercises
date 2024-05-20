#include <stdio.h>
#include <string.h>

void reverse_string(char *str) {
    int length = strlen(str);

    printf("Reversed string is: ");
    for (int i = length - 1; i >= 0; --i) {
        printf("%c", str[i]);
    }

    printf("\n");
}

int main() {
    char str[100];

    printf("Input a string to reverse: ");
    scanf("%s", str);

    printf("Expected Output:\n");
    reverse_string(str);

    return 0;
}
