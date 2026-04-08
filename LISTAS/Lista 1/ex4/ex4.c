#include <stdio.h>

int main() {

    int D; //total de matérias ofertadas pela faculdade
    int A, S, M; //ano, semestre e matérias ofertadas no semestre
    int c, matr, apv; //código da matéria, matriculados e aprovados
    int i, j, k = 0;

    scanf("%d", &D);
 
    int ano_semestre[99][2], maiores_reprovacoes[99][D];

    while (scanf("%d %d %d", &A, &S, &M) != EOF) {

        int reprovacoes[D];

        for (i=0; i<D; i++) {
            reprovacoes[i] = -1;
            maiores_reprovacoes[k][i] = -1;
        }

        for (i=0; i<M; i++) {
            scanf("%d %d %d", &c, &matr, &apv);
            reprovacoes[c] = matr - apv;
        }

        int maior_reprovacao = 0;
        for (i=0; i<D; i++) {
            if (reprovacoes[i] > maior_reprovacao) {
                maior_reprovacao = reprovacoes[i];
            }
        }

        j = 0;
        for (i=0; i<D; i++) {
            if (reprovacoes[i] == maior_reprovacao) {
                    maiores_reprovacoes[k][j] = i;
                    j++;
            }
        }

        ano_semestre[k][0] = A;
        ano_semestre[k][1] = S;
        k++;
    }

    for (i=0; i<k; i++) {
        printf("%d/%d\n", ano_semestre[i][0], ano_semestre[i][1]);
        for (j=0; j<D; j++) {
            if (maiores_reprovacoes[i][j] != -1) {
                printf("%d ", maiores_reprovacoes[i][j]);
            }
        }
        printf("\n\n");
    }

    return 0;
}
