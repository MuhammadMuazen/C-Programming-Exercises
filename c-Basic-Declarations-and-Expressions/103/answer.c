#include <stdio.h>

int main(void) {

    int n1, n2;

    printf("Input two integers:\n");
    scanf("%d%d", &n1, &n2);

    if(n1 > n2) {
        if(n1 % n2 == 0)
            printf("Multiplies\n");
        else
            printf("Not Multiplies\n");
    }
    else if(n2 > n1) {
        if(n2 % n1 == 0)
            printf("Multiplies\n");
        else 
            printf("Not Multiplies\n");
    }

    return 0;
}