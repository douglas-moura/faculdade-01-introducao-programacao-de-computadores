#include <stdio.h>

int main () {
    char estado_1, estado_2, codigo_1[3], codigo_2[3], cidade_1[15], cidade_2[15];
    int populacao_1, populacao_2, num_pts_turisticos_1, num_pts_turisticos_2;
    float area_1, area_2, pib_1, pib_2;

    printf("Digite o estado da primeira cidade: ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo_1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade_1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao_1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area_1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &num_pts_turisticos_1);

    printf("Digite o estado da segunda cidade: ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda cidade: ");
    scanf("%s", codigo_2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade_2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao_2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area_2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &num_pts_turisticos_2);

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %i\n", populacao_1);
    printf("Área: %f km²\n", area_1);
    printf("PIB: %f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_1);

    printf("-----------------------------------------------------------------------------------------\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %i\n", populacao_2);
    printf("Área: %f km²\n", area_2);
    printf("PIB: %f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_2);

    return 0;
}