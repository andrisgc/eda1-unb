#include <stdio.h>

void fazTonelada (double pesoKg) {
    printf("%.4lf\n", pesoKg/1000);
}

void fazGrama (double pesoKg) {
    printf("%.4lf\n", pesoKg*1000);
}

int validaPeso (double pesoKg) {
    if (pesoKg>=0)
        return 1;
    else
        return 0;
}

// int main() {

//     printf("%d\n", validaPeso(1000));
//     fazTonelada(1000);
//     fazGrama(1);

//     return 0;
// }