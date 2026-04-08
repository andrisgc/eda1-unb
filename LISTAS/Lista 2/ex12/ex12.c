#include <stdio.h>

void swapmax3(int *a, int *b, int *c) {
    int aux;
    if (*b > *a) {
        aux = *a;
        *a = *b;
        *b = aux;
    } 
    if (*c > *a) {
        aux = *a;
        *a = *c;
        *c = aux;
    } 
    if (*b < *c) {
        aux = *b;
        *b = *c;
        *c = aux;
    }   
}

// int main() {
//     int x = 1;
//     int y = 2;
//     int z = 2;
//     int *a = &x;
//     int *b = &y;
//     int *c = &z;

//     printf("%d %d %d\n", *a, *b, *c);
//     swapmax3(a, b, c);
//     printf("%d %d %d\n", *a, *b, *c);

//     return 0;
// }