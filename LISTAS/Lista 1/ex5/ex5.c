#include <stdio.h>

int main() {

    int F, L;
    int i, j;
    char fileira [20] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T'};
    char assento_letra;
    int assento_numero, numero_assento_letra;

    scanf("%d %d", &F, &L);

    int lugares [F][L];
    char fileira_inversa [F]; 

    j = F-1;
    for (i=0; i<F; i++) {
        fileira_inversa[i] = fileira[j];
        j--;
    }

    for (i=0; i<F; i++) {
        for (j=0; j<L; j++) {
            lugares[i][j] = 0;
        }
    }

    while (scanf(" %c%d\n", &assento_letra, &assento_numero) != EOF) {

        for (i=0; i<F; i++) {
            if (assento_letra == fileira_inversa[i]) {
                numero_assento_letra = i;
            }
        }

        for (i=0; i<F; i++) {
            for (j=1; j<=L; j++) {
                if (i == numero_assento_letra && j == assento_numero) {
                    lugares[i][j-1] = 1;
                }
            }
        }
    }

    printf(" ");
    for (i=0; i<L; i++) {
        printf(" %02d", i+1);
    }
    printf("\n");

    for (i=0; i<F; i++) {
        printf("%c ", fileira_inversa[i]);
        for (j=0; j<L; j++) {
            if (lugares[i][j] == 0) {
                printf("-- ");
            } else {
                printf("XX ");
            }
        }
        printf("\n");
    }

    return 0;    
}
