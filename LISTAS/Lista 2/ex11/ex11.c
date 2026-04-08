#include <stdio.h>

void swap(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}


// int main () {
//     int x = 100, y = 150;
//     int *a = &x;
//     int *b = &y;

//     printf("ANTES DO SWAP ");
//     printf("%d %d\n", *a, *b);

//     swap(a, b);
    
//     printf("DEPOIS DO SWAP ");
//     printf("%d %d\n", *a, *b);
    
//     return 0;
// }