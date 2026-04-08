#include <stdio.h>

struct tipoData {
    int dia, mes, ano;
};

struct tipoPessoa {
    char nome[80];
    struct tipoData dtNascimento;
};

struct tipoPessoa separaInfo (char nome[80], int dt_nascimento) {
    struct tipoPessoa p;
    int i=0;

    while (nome[i] != '\0') {
        p.nome[i] = nome[i];
        i++;
    }

    p.nome[i] = '\0';
    p.dtNascimento.dia = dt_nascimento%100;
    p.dtNascimento.mes = (dt_nascimento/100)%100;
    p.dtNascimento.ano = dt_nascimento/10000;

    return p;
}

// int main () {

//     struct tipoPessoa p;

//     p = separaInfo("Andris Castro", 20070422);

//     printf("'%s'\n", p.nome);
//     printf("%d\n", p.dtNascimento.dia);
//     printf("%d\n", p.dtNascimento.mes);
//     printf("%d\n", p.dtNascimento.ano);

//     return 0;
// }