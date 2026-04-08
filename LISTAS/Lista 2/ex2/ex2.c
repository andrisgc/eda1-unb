#include <stdio.h>

int par(char *str) {
    if (str[0] == '\0' || str[1] == '\0' || str[2] == '\0')
        return 0;

    int encontra = 0;
    if (str[0] == str[2])
        encontra = 1;

    return encontra + par(str + 1);
}


int main () {
    char str[201];
    scanf("%s", str);
    printf("%d\n", par(str));
    
    return 0;
}