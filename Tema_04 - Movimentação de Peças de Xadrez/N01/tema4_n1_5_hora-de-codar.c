#include <stdio.h>

int main() {
    int numero;

    do {
        printf("Digite um número par para sair do programa...\n");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("Você digitou o número par: %d\n", numero);
        }
        else {
            printf("Você digitou o número impar: %d\n", numero);
        }
    } while (numero % 2 != 0);

    printf("Programa encerrado.\n");

    return 0;
}