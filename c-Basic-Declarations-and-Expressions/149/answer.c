#include <stdio.h>
#include <string.h>

// Define a structure to hold a word and its corresponding page number
typedef struct{
    int page_no;
    char word[50];
} STR;

int main(void) {
    STR temp, str[10000]; // Declare variables of type STR
    int i=0,j,k;
    int count=0;

    printf("Input pairs of a word and a page_no number:\n"); 

  // Read word and page_no pairs until end of file (EOF)
    while(scanf("%s %d",str[i].word,&str[i].page_no) != EOF)
        i++;

    // Sorting algorithm to sort words alphabetically and by page number if words are the same
    for(j = 0; j < i; j++) {
        for( k= i-1; 0 < k; k--) {
            if(strcmp(str[k].word,str[k-1].word) < 0) {
                temp=str[k];
                str[k]=str[k-1];
                str[k-1]=temp;
                }
            else if(strcmp(str[k].word,str[k-1].word) == 0) {
                if(str[k].page_no < str[k-1].page_no){
                    temp=str[k];
                    str[k]=str[k-1];
                    str[k-1]=temp;
                }
            }
        }
    }

    printf("\nWord and page_no number in alphabetical order:\n"); 
    for(j = 0; j < i; j++) {
        if(j != 0) {
            if(strcmp(str[j].word,str[j-1].word) == 0)
                printf(" %d",str[j].page_no);
            else
                printf("\n%s\n%d",str[j].word,str[j].page_no);
        }
        else
            printf("%s\n%d",str[j].word,str[j].page_no);
    }

    printf("\n");
    return 0;
}
