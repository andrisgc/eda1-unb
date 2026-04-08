#include <stdio.h>

int contador = 0;
void movex (char *x, char *y) {
    if (*x == '\0') {
        if (contador > 0) {
            *y = 'x';
            contador--;
            movex(x, y+1);
        } else {
            *y = '\0';
        }
        return;
    }

    if (*x == 'x') {
        contador++;
        movex (x + 1, y);
    } else {
        *y = *x;
        movex (x + 1, y + 1);
    }
}

int main () {
    char antiga[101];
    char nova[101];
    scanf("%s", antiga);
    movex(antiga, nova);
    printf("%s\n", nova);

    return 0;
}