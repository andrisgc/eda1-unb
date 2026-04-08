#include <stdio.h>
#include <string.h>

struct tipoMusica {
    char nome [80];
    int ano;
};

struct tipoBanda {
    char nome [80];
    int qtd;
    struct tipoMusica musicas [100];
};

void pesquisarNomeMusica (char pesquisa[80], struct tipoBanda bandas[50], int n) {

    int encontrado = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<bandas[i].qtd; j++) {
            if (strcmp(bandas[i].musicas[j].nome, pesquisa) == 0) {
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano);
                encontrado = 1;
            }
        }
    }
    if (encontrado == 0)
        printf("Musica nao cadastrada\n");

}

// int main () {

//     struct tipoBanda teste[50];
//     int n, i, j;
//     scanf("%d", &n);

//     for (i=0; i<n; i++) {
//         scanf(" %[^\n]", teste[i].nome);
//         scanf("%d", &teste[i].qtd);
//         for (j=0; j<teste[i].qtd; j++) {
//             scanf (" %[^\n]", teste[i].musicas[j].nome);
//             scanf ("%d", &teste[i].musicas[j].ano);
//         }
//     }

//     pesquisarNomeMusica("Rebola", teste, n);

//     return 0;
// }