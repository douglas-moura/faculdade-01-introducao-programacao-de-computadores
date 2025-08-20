#include <stdio.h>

int main () {
    char estado_1, estado_2, codigo_1[4], codigo_2[4], cidade_1[15], cidade_2[15];
    int num_pts_turisticos_1, num_pts_turisticos_2, opcao_1, opcao_2;
    unsigned long int populacao_1, populacao_2;
    float area_1, area_2, pib_1, pib_2, densidade_1, densidade_2, pib_per_capita_1, pib_per_capita_2;
    float super_poder1, super_poder2;

    // Capturando dados da primeira cidade
    printf("****** Cartas de Cidades | Primeira Carta ******\n");

    printf("Digite o estado da primeira cidade: ");
    scanf(" %c", &estado_1);

    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo_1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade_1);

    printf("Digite a população da primeira cidade: ");
    scanf("%ld", &populacao_1);

    printf("Digite a área da primeira cidade: ");
    scanf("%f", &area_1);

    printf("Digite o PIB (em Bilhões) da primeira cidade: ");
    scanf("%f", &pib_1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &num_pts_turisticos_1);

    densidade_1 = (float) populacao_1 / area_1;
    pib_per_capita_1 = (float) (pib_1 * 1000000000) / populacao_1;

    //super_poder1 = (float) populacao_1 + area_1 + pib_1 + (float) num_pts_turisticos_1 + pib_per_capita_1 - densidade_1;

    // Capturando dados da segunda cidade
    printf("****** Cartas de Cidades | Segunda Carta ******\n");

    printf("Digite o estado da segunda cidade: ");
    scanf(" %c", &estado_2);

    printf("Digite o código da segunda cidade: ");
    scanf("%s", codigo_2);

    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade_2);

    printf("Digite a população da segunda cidade: ");
    scanf("%ld", &populacao_2);

    printf("Digite a área da segunda cidade: ");
    scanf("%f", &area_2);

    printf("Digite o PIB (em Bilhões) da segunda cidade: ");
    scanf("%f", &pib_2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &num_pts_turisticos_2);

    densidade_2 = (float) populacao_2 / area_2;
    pib_per_capita_2 = (float) (pib_2 * 1000000000) / populacao_2;

    //super_poder2 = (float) populacao_2 + area_2 + pib_2 + (float) num_pts_turisticos_2 + pib_per_capita_2 - densidade_2;

    // Exibindo as cartas

    printf("\n ***** Carta 1 ***** \n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigo_1);
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População: %u\n", populacao_1);
    printf("Área: %.2f km²\n", area_1);
    printf("PIB: %.2f bilhões de reais\n", pib_1);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_1);
    printf("Densidade Populacional %.2f hab/km²\n", densidade_1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_1);
    
    printf("\n ***** Carta 2 ***** \n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigo_2);
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População: %u\n", populacao_2);
    printf("Área: %.2f km²\n", area_2);
    printf("PIB: %.2f bilhões de reais\n", pib_2);
    printf("Número de Pontos Turísticos: %d\n", num_pts_turisticos_2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita_2);
    
    printf("\nComparação de Cartas:-----------------------------------------------------------------------------------------\n");

    printf("\nEscolha a primeira categoria para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    scanf("%d", &opcao_1);

    printf("\nEscolha a primeira categoria para comparar as cartas:\n");
    if (opcao_1 != 1) printf("1 - População\n");
    if (opcao_1 != 2) printf("2 - Área\n");
    if (opcao_1 != 3) printf("3 - PIB\n");
    if (opcao_1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao_1 != 5) printf("5 - Densidade Demográfica\n");
    scanf("%d", &opcao_2);

    // Comparando as cartas com base na escolha do jogador

    switch (opcao_1) {
        case 1:
            printf(" \n População: \n");
            super_poder1 += (float) populacao_1;
            super_poder2 += (float) populacao_2;

            if(populacao_1 == populacao_2) {
                printf("Empate! Ambas as cidades têm a mesma população: %u\n", populacao_1);
            } else {
                if (populacao_1 >= populacao_2) {
                    printf("Carta 1 - %s (%c): %u \n", cidade_1, estado_1, populacao_1);
                    printf("Carta 2 - %s (%c): %u \n", cidade_2, estado_2, populacao_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %u \n", cidade_1, estado_1, populacao_1);
                    printf("Carta 2 - %s (%c): %u \n", cidade_2, estado_2, populacao_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 2:
            printf(" \n Área: \n");
            super_poder1 += area_1;
            super_poder2 += area_2;

            if (area_1 == area_2) {
                printf("Empate! Ambas as cidades têm a mesma área: %.2f km²\n", area_1);
            } else {
                if (area_1 >= area_2) {
                    printf("Carta 1 - %s (%c): %.2f km² \n", cidade_1, estado_1, area_1);
                    printf("Carta 2 - %s (%c): %.2f km² \n", cidade_2, estado_2, area_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %.2f km² \n", cidade_1, estado_1, area_1);
                    printf("Carta 2 - %s (%c): %.2f km² \n", cidade_2, estado_2, area_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 3:
            printf(" \n PIB: \n");
            super_poder1 += pib_1;
            super_poder2 += pib_2;

            if (pib_1 == pib_2) {
                printf("Empate! Ambas as cidades têm o mesmo PIB: %.2f bilhões de reais\n", pib_1);
            } else {
                if (pib_1 >= pib_2) {
                    printf("Carta 1 - %s (%c): %.2f bilhões de reais \n", cidade_1, estado_1, pib_1);
                    printf("Carta 2 - %s (%c): %.2f bilhões de reais \n", cidade_2, estado_2, pib_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else { 
                    printf("Carta 1 - %s (%c): %.3f bilhões de reais \n", cidade_1, estado_1, pib_1);
                    printf("Carta 2 - %s (%c): %.3f bilhões de reais \n", cidade_2, estado_2, pib_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 4:
            printf(" \n Pontos Turísticos: \n");
            super_poder1 += (float) num_pts_turisticos_1;
            super_poder2 += (float) num_pts_turisticos_2;

            if (num_pts_turisticos_1 == num_pts_turisticos_2) {
                printf("Empate! Ambas as cidades têm o mesmo número de pontos turísticos: %d\n", num_pts_turisticos_1);
            } else {
                if (num_pts_turisticos_1 >= num_pts_turisticos_2) {
                    printf("Carta 1 - %s (%c): %d pontos turísticos \n", cidade_1, estado_1, num_pts_turisticos_1);
                    printf("Carta 2 - %s (%c): %d pontos turísticos \n", cidade_2, estado_2, num_pts_turisticos_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %d pontos turísticos \n", cidade_1, estado_1, num_pts_turisticos_1);
                    printf("Carta 2 - %s (%c): %d pontos turísticos \n", cidade_2, estado_2, num_pts_turisticos_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 5:
            printf(" \n Densidade Demográfica: \n");
            super_poder1 -= densidade_1;
            super_poder2 -= densidade_2;

            if (densidade_1 == densidade_2) {
                printf("Empate! Ambas as cidades têm a mesma densidade demográfica: %.2f hab/km²\n", densidade_1);
            } else {
                if (densidade_1 <= densidade_2) {
                    printf("Carta 1 - %s (%c): %.2f hab/km² \n", cidade_1, estado_1, densidade_1);
                    printf("Carta 2 - %s (%c): %.2f hab/km² \n", cidade_2, estado_2, densidade_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %.2f hab/km² \n", cidade_1, estado_1, densidade_1);
                    printf("Carta 2 - %s (%c): %.2f hab/km² \n", cidade_2, estado_2, densidade_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }            

        default:
            break;
    }

    switch (opcao_2) {
        case 1:
            printf(" \n População: \n");
            super_poder1 += (float) populacao_1;
            super_poder2 += (float) populacao_2;

            if(populacao_1 == populacao_2) {
                printf("Empate! Ambas as cidades têm a mesma população: %u\n", populacao_1);
            } else {
                if (populacao_1 >= populacao_2) {
                    printf("Carta 1 - %s (%c): %u \n", cidade_1, estado_1, populacao_1);
                    printf("Carta 2 - %s (%c): %u \n", cidade_2, estado_2, populacao_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %u \n", cidade_1, estado_1, populacao_1);
                    printf("Carta 2 - %s (%c): %u \n", cidade_2, estado_2, populacao_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 2:
            printf(" \n Área: \n");
            super_poder1 += area_1;
            super_poder2 += area_2;

            if (area_1 == area_2) {
                printf("Empate! Ambas as cidades têm a mesma área: %.2f km²\n", area_1);
            } else {
                if (area_1 >= area_2) {
                    printf("Carta 1 - %s (%c): %.2f km² \n", cidade_1, estado_1, area_1);
                    printf("Carta 2 - %s (%c): %.2f km² \n", cidade_2, estado_2, area_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %.2f km² \n", cidade_1, estado_1, area_1);
                    printf("Carta 2 - %s (%c): %.2f km² \n", cidade_2, estado_2, area_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 3:
            printf(" \n PIB: \n");
            super_poder1 += pib_1;
            super_poder2 += pib_2;

            if (pib_1 == pib_2) {
                printf("Empate! Ambas as cidades têm o mesmo PIB: %.2f bilhões de reais\n", pib_1);
            } else {
                if (pib_1 >= pib_2) {
                    printf("Carta 1 - %s (%c): %.2f bilhões de reais \n", cidade_1, estado_1, pib_1);
                    printf("Carta 2 - %s (%c): %.2f bilhões de reais \n", cidade_2, estado_2, pib_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else { 
                    printf("Carta 1 - %s (%c): %.3f bilhões de reais \n", cidade_1, estado_1, pib_1);
                    printf("Carta 2 - %s (%c): %.3f bilhões de reais \n", cidade_2, estado_2, pib_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 4:
            printf(" \n Pontos Turísticos: \n");
            super_poder1 += (float) num_pts_turisticos_1;
            super_poder2 += (float) num_pts_turisticos_2;

            if (num_pts_turisticos_1 == num_pts_turisticos_2) {
                printf("Empate! Ambas as cidades têm o mesmo número de pontos turísticos: %d\n", num_pts_turisticos_1);
            } else {
                if (num_pts_turisticos_1 >= num_pts_turisticos_2) {
                    printf("Carta 1 - %s (%c): %d pontos turísticos \n", cidade_1, estado_1, num_pts_turisticos_1);
                    printf("Carta 2 - %s (%c): %d pontos turísticos \n", cidade_2, estado_2, num_pts_turisticos_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %d pontos turísticos \n", cidade_1, estado_1, num_pts_turisticos_1);
                    printf("Carta 2 - %s (%c): %d pontos turísticos \n", cidade_2, estado_2, num_pts_turisticos_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }
            break;
        
        case 5:
            printf(" \n Densidade Demográfica: \n");
            super_poder1 -= densidade_1;
            super_poder2 -= densidade_2;

            if (densidade_1 == densidade_2) {
                printf("Empate! Ambas as cidades têm a mesma densidade demográfica: %.2f hab/km²\n", densidade_1);
            } else {
                if (densidade_1 <= densidade_2) {
                    printf("Carta 1 - %s (%c): %.2f hab/km² \n", cidade_1, estado_1, densidade_1);
                    printf("Carta 2 - %s (%c): %.2f hab/km² \n", cidade_2, estado_2, densidade_2);
                    printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
                } else {
                    printf("Carta 1 - %s (%c): %.2f hab/km² \n", cidade_1, estado_1, densidade_1);
                    printf("Carta 2 - %s (%c): %.2f hab/km² \n", cidade_2, estado_2, densidade_2);
                    printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
                }
            }            

        default:
            break;
    }
    
    printf(" \n *** Super Poder: *** \n");
    if (super_poder1 == super_poder2) {
        printf("Empate! Ambas as cartas têm o mesmo super poder: %.2f\n", super_poder1);
    } else {
        if (super_poder1 >= super_poder2) {
            printf("Super Poder da Carta 1 (%s): %.2f\n", cidade_1, super_poder1);
            printf("Super Poder da Carta 2 (%s): %.2f\n", cidade_2, super_poder2);
            printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
        } else {
            printf("Super Poder da Carta 1 (%s): %.2f\n", cidade_1, super_poder1);
            printf("Super Poder da Carta 2 (%s): %.2f\n", cidade_2, super_poder2);
            printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
        }
    }    

    /*
    printf(" \n PIB per Capita: \n");
    if (pib_per_capita_1 >= pib_per_capita_2) {
        printf("Carta 1 - %s (%c): %.2f reais \n", cidade_1, estado_1, pib_per_capita_1);
        printf("Carta 2 - %s (%c): %.2f reais \n", cidade_2, estado_2, pib_per_capita_2);
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade_1);
    } else {
        printf("Carta 1 - %s (%c): %.2f reais \n", cidade_1, estado_1, pib_per_capita_1);
        printf("Carta 2 - %s (%c): %.2f reais \n", cidade_2, estado_2, pib_per_capita_2);
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade_2);
    }
    
    */

    return 0;
}