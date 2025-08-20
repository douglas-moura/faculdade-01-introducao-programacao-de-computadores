#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao;
    int numeroSecreto, palpite;

    srand(time(0)); // Inicializa o gerador de números aleatórios
    numeroSecreto = rand() % 100; // Gera um número entre 1 e 100

    printf("Bem-vindo ao Jogo de Adivinhação!\n");
    printf("Escolha uma opção:\n");
    printf("1 - O meu número é maior\n");
    printf("2 - O meu número é menor\n");
    printf("3 - O meu número é igual\n");

    printf("Digite sua escolha: ");
    scanf("%d", &opcao);

    printf("Digite um palpite entre 0 e 99: ");
    scanf("%d", &palpite);

    switch (opcao){
    case 1:
        palpite > numeroSecreto ? printf("Você acertou! O número secreto é: %d\n", numeroSecreto) : printf("Você errou! O número secreto é: %d\n", numeroSecreto);
        break;

    case 2:
        palpite < numeroSecreto ? printf("Você acertou! O número secreto é: %d\n", numeroSecreto) : printf("Você errou! O número secreto é: %d\n", numeroSecreto);
        break;
    
    case 3:
        palpite == numeroSecreto ? printf("Você acertou! O número secreto é: %d\n", numeroSecreto) : printf("Você errou! O número secreto era: %d\n", numeroSecreto);
        break;

    default:
        printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        break;
    }

    return 0;
}