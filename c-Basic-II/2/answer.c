#include <stdio.h>
#include <string.h>

void rev_substring(char str[], int n1, int n2);

int main(void) {

    char inp_str[100];
    int n1, n2;

    printf("Input the string:\n");
    scanf("%s", inp_str);

    printf("Input the reverse numbers (start - finish): ");
    scanf("%d%d", &n1, &n2);

    if(n1 > n2) {
        printf("The first number should be smaller than the second number!\n");
        return 1;
    }

    rev_substring(inp_str, n1, n2);
    
    printf("The new string is:\n%s\n", inp_str);

    return 0;
}

void rev_substring(char str[], int n1, int n2) {
    //check if n1 and n2 are invalid
    if(n1 < 0 || n1 >= strlen(str) || n2 < 0 || n2 >= strlen(str) || n1 > n2) {
        printf("Invalid indices.\n");
        return;
    }

    for(int i = n1 - 1, j = n2 - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}