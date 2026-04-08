#include <stdio.h>

int main () {
    int fileiras, lugares_por_fileira, lugar_ocupado;
    char fileira_ocupada;
    int cinema[30][30] = {};
    
    scanf("%d %d", &fileiras, &lugares_por_fileira);

    while(scanf(" %c%d", &fileira_ocupada, &lugar_ocupado) != EOF)
        cinema[(int)'A' + fileiras - fileira_ocupada][lugar_ocupado - 1] = 1; 

    for(int i=0; i <= fileiras; i++) {
        if (i == 0) {
            printf(" ");
            for (int k=1; k<= lugares_por_fileira; k++) {
                printf(" %02d", k);
            }
        } else {
            printf("%c ", 'A' + fileiras - i);
            for (int j=0; j<lugares_por_fileira; j++) {
                printf("%s", cinema[i][j] ? "XX " : "-- ");
            }
        }
        printf("\n");
    }

    return 0;
}