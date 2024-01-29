#include <stdio.h>
#include <string.h>

void extract_words(char sentence[]) {
    //Delimiters
    char *token = strtok(sentence, " ,.?!");

    while(token != NULL) {
        int len = strlen(token);

        if(len >= 3 && len <= 6) 
            printf("%s\n", token);

        // Get the next token
        token = strtok(NULL, " ,.?!");
    }
}

int main(void) {
    
    char sentence[1024];

    printf("English sentences consisting of delimiters and alphanumeric characters on one line:\n");
    fgets(sentence, sizeof(sentence), stdin);

    if(sentence[strlen(sentence) - 1] == '\n') 
        sentence[strlen(sentence) - 1] = '\0';

    printf("Extract words of 3 to 6 characters length from the said sentence:\n");
    extract_words(sentence);

    return 0;
}