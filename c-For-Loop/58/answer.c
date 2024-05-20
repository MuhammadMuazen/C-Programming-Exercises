#include <stdio.h>

int string_length(char *str) {
    int length = 0;

    for (int i = 0; str[i] != '\0'; ++i) {
        length++;
    }

    return length;
}

int main() {
    char str[100];

    printf("Input a string: ");
    scanf("%s", str);

    int length = string_length(str);

    printf("The string contains %d number of characters.\n", length);
    printf("So, the length of the string %s is: %d\n", str, length);

    return 0;
}
