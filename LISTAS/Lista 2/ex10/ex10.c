#include <stdio.h>

void verificaBissexto(int *ano, int *eh_bissexto);
void validaEntrada(int *dia, int *ano, int *valido);
void calculaDiaMes(int *dia_ano, int *ano, int *dia_res, int *mes_res);

int main() {
    int dia_ano, ano;
    int dia_res, mes_res;
    int entrada_valida;

    scanf("%d %d", &dia_ano, &ano);

    validaEntrada(&dia_ano, &ano, &entrada_valida);

    if (entrada_valida) {
        calculaDiaMes(&dia_ano, &ano, &dia_res, &mes_res);
        
        printf("%02d/%02d/%04d\n", dia_res, mes_res, ano);
    } else {
        printf("Entradas invalidas!\n");
    }

    return 0;
}

void verificaBissexto(int *ano, int *eh_bissexto) {
    if ((*ano % 400 == 0) || (*ano % 4 == 0 && *ano % 100 != 0)) {
        *eh_bissexto = 1;
    } else {
        *eh_bissexto = 0;
    }
}

void validaEntrada(int *dia, int *ano, int *valido) {
    int bissexto;
    int max_dias = 365;

    verificaBissexto(ano, &bissexto);

    if (bissexto) {
        max_dias = 366;
    }

    if (*dia < 1 || *dia > max_dias) {
        *valido = 0;
    } else {
        *valido = 1;
    }
}

void calculaDiaMes(int *dia_ano, int *ano, int *dia_res, int *mes_res) {
    int bissexto;
    int dias_no_mes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int dia_temp = *dia_ano;
    int mes_atual = 1;

    verificaBissexto(ano, &bissexto);
    if (bissexto) {
        dias_no_mes[2] = 29;
    }

    while (dia_temp > dias_no_mes[mes_atual]) {
        dia_temp = dia_temp - dias_no_mes[mes_atual];
        mes_atual++;
    }

    *dia_res = dia_temp;
    *mes_res = mes_atual;
}