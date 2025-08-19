#include <stdio.h>

int main () {
    float nota1, nota2, nota3, nota4;
    float media;

    printf("****** Calculadora de Media Aritmetica ******\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("A media das notas e: %.1f\n", media);

    return 0;
}