#include <stdio.h>

long int mem_fibonacci[81];

long int fibonacci (int n) {
    if (n == 1 || n == 2)
        return 1;
    
    if (mem_fibonacci[n] != 0)
        return mem_fibonacci[n];

    mem_fibonacci[n] = fibonacci(n-1) + fibonacci(n-2);

    return mem_fibonacci[n];
}

// int main () {
//     int n;
//     scanf("%d", &n);
//     printf("%ld\n", fibonacci(n));

//     return 0;
// }