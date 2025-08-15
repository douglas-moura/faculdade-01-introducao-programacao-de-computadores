#include <stdio.h>

int main () {
    char nome[50];
    int idade, matricula;
    float altura;

    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    printf("Digite sua matricula: ");
    scanf("%d", &matricula);

    printf("Nome do aluno: %s - cód: %d\n", nome, matricula);
    printf("Idade %d - Altura %f\n", idade, altura);

    return 0;
}