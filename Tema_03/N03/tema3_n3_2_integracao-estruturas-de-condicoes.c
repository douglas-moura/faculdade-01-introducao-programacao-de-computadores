#include <stdio.h>

int main () {
    int opcao;
    float nota1, nota2, media;
    
    printf("*** Menu de Gerenciamento de Estudantes ***\n");
    printf("1. Calcular Média\n");
    printf("2. Determianr Status\n");
    printf("3. Sair\n");
    printf("\nDigite uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("\n** Calcular a Média **\n");
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        if (nota1 < 0 || nota1 > 10 || nota2 < 0 || nota2 > 10) {
            printf("Notas inválidas! Por favor, insira notas entre 0 e 10.\n");
            return 1; // Encerra o programa com erro
        } else {
            printf("Calculando média...\n");
            media = (nota1 + nota2) / 2;
            printf("A média é: %.2f\n", media);
        }
        break;

    case 2:
        printf("\n** Definir Status **\n");
        printf("Digite a média do aluno: ");
        scanf("%f", &media);
        media >= 5.0 ? printf("Aluno Aprovado\n") : printf("Aluno Reprovado\n");
        break;

    case 3:
        printf("\n** Sair **\n");
        printf("Saindo do programa...\n");
        break;

    default:
        printf("\nOpção inválida! Por favor, escolha uma opção válida.\n");
        break;
    }

    return 0;
}