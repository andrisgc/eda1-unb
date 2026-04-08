#include <stdio.h>

int contador=0;
int conta7 (long int numero) {
    if (numero == 0)
        return contador;
    else if (numero%10 == 7)
        contador++;
    return conta7(numero/10);
}

int main () {
    long int numero;
    scanf("%ld", &numero);
    printf("%d\n", conta7(numero));

    return 0;
}