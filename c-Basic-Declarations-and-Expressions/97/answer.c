#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int words = 0, characters = 0, lines = 0;

void count_words_characters_lines(char *str);

// Signal handler function
void signalHandler(int signal) {
    printf("\nNumber of words: %d\n", words);
    printf("Number of characters: %d\n", characters);
    printf("Number of lines: %d\n", lines);
    exit(0);
}

int main() {
    char inputString[1000];

    // Set up the signal handler
    signal(SIGINT, signalHandler);

    printf("Enter text (Ctrl+D to end input on Unix/Linux, Ctrl+Z on Windows):\n");

    while (fgets(inputString, sizeof(inputString), stdin) != NULL) {
        count_words_characters_lines(inputString);
    }

    return 0;
}

void count_words_characters_lines(char *str) {
    int isWord = 0; 

    while (*str) {
        // If the current character is a space, set the flag to indicate the end of a word
        if (*str == ' ' || *str == '\t') {
            isWord = 0;
        }
        else if (!isWord) {
            isWord = 1;
            words++;
        }

        characters++;

        if (*str == '\n') {
            lines++;
        }
        
        // Move to the next character
        str++;
    }
}
