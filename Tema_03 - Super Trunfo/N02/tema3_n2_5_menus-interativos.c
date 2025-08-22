#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int opcao;
    int numeroSecreto, palpite;

    printf("Escolha uma opção:\n");
    printf("1 - Iniciar Jogo\n");
    printf("2 - Ver Regras\n");
    printf("3 - Sair\n");

    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0)); // Inicializa o gerador de números aleatórios
            numeroSecreto = rand() % 10; // Gera um número entre 1 e 10
            printf("Digite um palpite entre 0 e 9: ");
            scanf("%d", &palpite);
            if (numeroSecreto == palpite) {
                printf("Parabéns! Você acertou o número secreto: %d\n", numeroSecreto);
            } else {
                printf("Você errou! O número secreto era: %d\n", numeroSecreto);
            }
            break;

        case 2:
            printf("As regras são...\n");
            break;

        case 3:
            printf("Saindo do jogo\n");
            break;
        
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.");
            break;
    }

    return 0;
}