#include <stdio.h>

int main() {

    int n=0, i=0, j=0;
    char T[100];
    char nome[100];
    char sobrenome[100];
    int espacos[100];

    scanf(" %[^\n]", T);

    while (T[i] != '\0') {
        if (T[i] == ' ') {
            espacos[n] = i;
            n++;
        }
        i++;
    }

    i=0;
    while (T[i] != ' ') {
        nome[i] = T[i];
        i++;
    }
    nome[i] = '\0';

    i = espacos[n-1] + 1;
    while (T[i] != '\0') {
        sobrenome[j] = T[i];
        i++;
        j++;
    }
    sobrenome[j] = '\0';

    i=0;
    while (nome[i] != '\0') {
        if ((int)nome[i] >=65 && (int)nome[i] <= 90)
            nome[i] = (char)((int)nome[i] + 32);
        i++;
    }
    
    i=0;
    while (sobrenome[i] != '\0') {
        if ((int)sobrenome[i] >=65 && (int)sobrenome[i] <= 90)
            sobrenome[i] = (char)((int)sobrenome[i] + 32);
        i++;
    }

    printf("%s.%s@unb.br\n", nome, sobrenome);    

    return 0;
}