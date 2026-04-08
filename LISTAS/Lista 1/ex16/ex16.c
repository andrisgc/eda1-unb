#include <stdio.h>

int faz_conta_direito(int parcelas, char op) {
    int n, x;
    scanf("%d", &n);
    for (int i=0; i<parcelas-1; i++) {
        scanf("%d", &x);
        if (op == '+')
            n += x;
        else
            n -= x;
    }

    return n;
}

// int main () {
//     printf("%d\n", faz_conta_direito(4, '-'));
//     return 0;
// }