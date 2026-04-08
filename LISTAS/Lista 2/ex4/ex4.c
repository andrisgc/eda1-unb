#include <stdio.h>

int i=0;
void str_contrario(char str[501]) {
    if (str[i] == '\0')
        return;
    i++;
    str_contrario(str);
    i--;
    printf("%c", str[i]);
}

int main () {
    char str[501];
    scanf("%s", str);
    str_contrario(str);
    printf("\n");

    return 0;
}