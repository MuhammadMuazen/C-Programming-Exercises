#include <stdio.h>

#define MAX_LEN 100

int main(void) {

    char input_str[MAX_LEN];
    char output_str[MAX_LEN];

    printf("Input some text: \n");

    fgets(input_str, sizeof(input_str), stdin);

    for(register int i = 0; i < sizeof(input_str) - 1; i++) {
        if(input_str[i] == ' ')
            output_str[i] = '\n';
        else 
            output_str[i] = input_str[i];
    }

    output_str[sizeof(input_str) - 1] = '\0';

    printf("%s", output_str);

    return 0;
}