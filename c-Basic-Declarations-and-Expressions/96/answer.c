#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int blank_char = 0, tab_char = 0, new_line = 0;

void print_values(int bl, int ch, int ln);
void signal_handler(int signum);

int main(void) {

    int input_c;

    printf("Number of blanks, tabs, and newlines:\n");
    printf("Input few words/tab/newlines: \n");

    signal(SIGINT, signal_handler);

    while((input_c = getchar()) != EOF) {
        if(input_c == ' ')
            blank_char++;
        else if(input_c == '\t')
            tab_char++;
        else if(input_c == '\n')
            new_line++;
    }

    return 0;
}

void print_values(int bl, int ch, int ln) {
    printf("\nblank=%d,tab=%d,newline=%d\n", bl, ch, ln);
}

void signal_handler(int signum) {
    print_values(blank_char, tab_char, new_line);
    exit(signum);
}