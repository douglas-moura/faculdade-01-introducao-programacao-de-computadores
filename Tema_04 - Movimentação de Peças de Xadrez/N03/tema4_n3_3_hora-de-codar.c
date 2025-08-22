#include <stdio.h>

void recursivo(int numero) {
    if (numero > 0) {
        recursivo(numero - 1);
        printf("%d \n", numero);
    }
}

int main () {
    int num, ind, soma = 0;

    for (ind = 1; ind <= 5; ind++) {
        scanf("%d", &num);
        if (num % 2 == 0) soma += num;   
    }
    printf("%d", soma);

    return 0;
}