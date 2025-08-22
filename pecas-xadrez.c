#include <stdio.h>

void moverTorre(int numero) {
    if (numero > 0) {
        printf("Direita \n");
        moverTorre(numero - 1);
    }
}

void moverBispo(int numero) {
    if (numero > 0) {
        // Isso aqui não faz sentido, mas vou seguir o que o exercício pede
        for (int i = 0; i < 1; i++) {
            printf("Cima \n");

            for (int j = 0; j < 1; j++) {
                printf("Direita \n");
            }
        }       
        moverBispo(numero - 1);
    }
}

void moverRainha(int numero) {
    if (numero > 0) {
        printf("Esquerda \n");
        moverRainha(numero - 1);
    }
}

int main () {
    printf("** Torre **\n");
    moverTorre(5);

    printf("\n");
    
    printf("** Bispo **\n");
    moverBispo(4);

    printf("\n");

    printf("** Rainha **\n");
    moverRainha(7);

    printf("\n");

    printf("** Cavalo **\n");
    // aqui também não faz sentido, mas vou seguir o que o exercício pede
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Cima \n");
        }
        printf("Direita \n");
    }
    
    return 0;
}