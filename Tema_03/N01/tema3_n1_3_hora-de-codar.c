#include <stdio.h>

int main () {
    unsigned int estoque, estoqueMinimo = 1000;
    float umidade, temperatura;

    printf("Digite o estoque do produto: ");
    scanf("%u", &estoque);

    printf("Digite a umidade do ambiente: ");
    scanf("%f", &umidade);

    printf("Digite a temperatura do ambiente: ");
    scanf("%f", &temperatura);

    if (temperatura >= 30) {
        printf("A temperatura está alta.\n");
    } else {
        printf("A temperatura está normal.\n");
    }

    if (umidade >= 50) {
        printf("A umidade está elevada.\n");
    } else  {
        printf("A umidade está dentro dos parâmetros.\n");
    }

    if (estoque < estoqueMinimo) {
        printf("O estoque está baixo.\n");
    } else {
        printf("O estoque está adequado.\n");
    }

    return 0;
}