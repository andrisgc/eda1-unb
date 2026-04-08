#include <stdio.h>

int main() {

    int D;
    int A, S, m, c, matr, apv;
    int i;

    scanf("%d", &D);

    while (scanf("%d %d %d", &A, &S, &m) != EOF) {

        int reprovacoes[D];

        for (i=0; i<D; i++)
            reprovacoes[i] = -1;

        for (i=0; i<m; i++) {
            scanf("%d %d %d", &c, &matr, &apv);
            reprovacoes[c] = matr - apv;
        }

        int maior_reprovacao = 0;
        for (i=0; i<D; i++) {
            if (reprovacoes[i] > maior_reprovacao)
                maior_reprovacao = reprovacoes[i];
        }

        printf("%d/%d\n", A, S);
        for (i=0; i<D; i++) {
            if (reprovacoes[i] == maior_reprovacao)
                printf("%d ", i);
        }
        printf("\n\n");
    }

    return 0;
}