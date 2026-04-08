#include <stdio.h>

int i=0;
void troca_xy (char str[80]) {
    if (str[i] == '\0') 
        return;
    else if (str[i] == 'x')
        printf("%c", 'y');
    else 
        printf("%c", str[i]);
    i++;
    troca_xy (str);
}

int main () {
    char str[80];

    scanf("%s", str);
    troca_xy(str);
    printf("\n");

    return 0;
}