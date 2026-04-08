#include <stdio.h>

int pa_recursiva(int *v, int primeiro, int ultimo) {
    if ((v[primeiro] + v[ultimo]) != (v[primeiro+1]+v[ultimo-1]))
        return 0;
    else if (primeiro-ultimo == 1 || ultimo-primeiro == 1)
        return 1;
    else
        return pa_recursiva(v, primeiro+1, ultimo-1);
}

// int main () {

//     int arr[6] = {1,2,0,1,0,1};
//     int *v = arr;
//     printf("%d\n", pa_recursiva(v, 0, 5));

//     return 0;
// }