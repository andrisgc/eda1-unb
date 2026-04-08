#include <stdio.h>

void movex (char *x) {
    if (*x == '\0')
        return;
        
    if (*x == 'x') {
        movex (x + 1);
        putchar('x');
    } else {
        putchar(*x);
        movex (x + 1);
    }
}

int main () {
    char str[101];

    if (scanf("%100s", str) == 1){
        movex(str);
        printf("\n");
    }
    
    return 0;
}