#include <stdio.h>

int main() {

    int n, i, maior=0;
    char str[100];

    scanf("%d", &n);

    int tamanhos[n];

    for (i=0; i<n; i++) {
        scanf("%s", str);
        int j=0;
        while (str[j] != '\0')
            j++;
        tamanhos[i] = j;
    }

    for (i=0; i<n; i++) {
        if (tamanhos[i] > maior) 
            maior = tamanhos[i];
    }

    printf("%d\n", maior);

    return 0;
}