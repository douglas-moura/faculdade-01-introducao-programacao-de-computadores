#include <stdio.h>

int main () {
    char estado_1, estado_2, codigo_1[3], codigo_2[3], cidade_1[15], cidade_2[15];
    int populacao_1, populacao_2, num_pts_turisticos_1, num_pts_turisticos_2;
    float area_1, area_2, pib_1, pib_2, densidade_1, densidade_2, pib_per_capita_1, pib_per_capita_2;

    // Capturando dados da primeira cidade
    printf("****** Cartas de Cidades | Primeira Carta ******\n");

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

    printf("Digite o PIB (em Bilhões) da primeira cidade: ");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &num_pts_turisticos_1);

    densidade_1 = (float) populacao_1 / area_1;
    pib_per_capita_1 = (float) (pib_1 * 1000000000) / populacao_1;

    // Capturando dados da segunda cidade
    printf("****** Cartas de Cidades | Segunda Carta ******\n");

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

    printf("Digite o PIB (em Bilhões) da segunda cidade: ");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &num_pts_turisticos_2);

    densidade_2 = (float) populacao_2 / area_2;
    pib_per_capita_2 = (float) (pib_2 * 1000000000) / populacao_2;

    // Exibindo as cartas

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_1);
    printf("Densidade Populacional %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);

    printf("-----------------------------------------------------------------------------------------\n");
    
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);

    return 0;
}