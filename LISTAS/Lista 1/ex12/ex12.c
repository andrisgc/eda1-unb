#include <stdio.h>
#include <string.h>

struct tipoBanda {
    char nome [80];
    int ano;
};

struct tipoShow {
    char nome [80];
    int qtd;
    struct tipoBanda bandas [100];
};

void pesquisarNomeBanda (char pesquisa[80], struct tipoShow shows[50], int n) {
    int encontrado = 0;
    for (int i=0; i<n; i++) {
        for (int j=0; j<shows[i].qtd; j++) {
            if (strcmp(shows[i].bandas[j].nome, pesquisa) == 0) {
                printf("%s : ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                encontrado = 1;
            }
        }
    }
    if (encontrado == 0)
        printf("Banda nao cadastrada\n");
}

// int main () {
    
//     struct tipoShow exemplo[50];
//     int n;

//     scanf("%d", &n);

//     for (int i=0; i<n; i++) {
//         scanf(" %[^\n]", exemplo[i].nome);
//         scanf("%d", &exemplo[i].qtd);
//         for (int j=0; j<exemplo[i].qtd; j++) {
//             scanf(" %[^\n]", exemplo[i].bandas[j].nome);
//             scanf("%d", &exemplo[i].bandas[j].ano);
//         }
//     }

//     pesquisarNomeBanda("Lady Gaga", exemplo, n);

//     return 0;
// }