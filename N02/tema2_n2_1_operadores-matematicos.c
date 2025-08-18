#include <stdio.h>

int main () {
    /*
    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;
    divisao = numero1 / numero2;

    printf("Resultado da soma: %d\n", soma);
    printf("Resultado da subtração: %d\n", subtracao);
    printf("Resultado da multiplicação: %d\n", multiplicacao);
    printf("Resultado da divisão: %d\n", divisao);

    return 0;
}