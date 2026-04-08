#include <stdio.h>
// #include <string.h>

int i=0, contador=0;
int vogais(char str[101]) {
    if (str[i] == '\0')
        return contador;
    else if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') //(strchr("AEIOU", str[i]) != NULL)
        contador++;
    i++;
    return vogais(str);
}

int main () {
    char str[101];
    scanf("%s", str);
    printf("%d\n", vogais(str));

    return 0;
}