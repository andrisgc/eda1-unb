#include <stdio.h>

int main () {

    int i=0;
    char T[1000];

    scanf("%s", T);

    while (T[i] != '\0')
        i++;

    printf("%d\n", i);

    return 0;
}