#include <stdio.h>

void movex (char *x) {
    if (*x == '\0')
        return;
        
    if (*x == 'x') {
        movex (x + 1);
        printf("%c", *x);
    } else {
        printf("%c", *x);
        movex (x + 1);
    }
}

int main () {
    char str[101];
    scanf("%s", str);
    movex(str);
    printf("\n");

    return 0;
}