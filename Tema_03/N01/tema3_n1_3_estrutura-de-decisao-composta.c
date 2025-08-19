#include <stdio.h>

int main () {
    int numero1, numero2;

    numero1 = 10;
    numero2 = 50;

    if (numero1 > numero2) {
        printf("O primeiro número é maior que o segundo.\n");
    } else {
        printf("O segundo número é maior que o primeiro.\n");
    }

    return 0;
}