#include <stdio.h>

int main() {

    int i=0;
    char T[100];

    scanf(" %[^\n]", T);

    while(T[i] != '\0') 
        i++;

    i--;
    for (; i>=0; i--) {
        printf("%c - %d\n", T[i], (int)T[i]);
    }

    return 0;
}