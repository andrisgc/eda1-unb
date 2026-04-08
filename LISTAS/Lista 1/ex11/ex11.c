#include <stdio.h>

int main () {

    int i, o=0;
    char T[100];

    while (scanf(" %[^\n]", T) != EOF) {
        i = 0;
        while (T[i] != '\0') {
            if (T[i] == 'o')
                o++;
            i++;
        }
    }

    printf("%d\n", o);

    return 0;
}