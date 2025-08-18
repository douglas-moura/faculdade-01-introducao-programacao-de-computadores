#include <stdio.h>

int main () {
    int numeroSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000; // Este valor é válido para um unsigned int
    
    int numeroNormal = 2147483647; // Valor máximo de um int normal
    long int numeroGrande = 2147483647; // Valor máximo de um long int

    printf("Número com sinal: %d\n", numeroSinal);
    printf("Número sem sinal: %u\n", numeroSemSinal);
    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; // Atribuindo um valor maior que o máximo de um int
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);

    return 0;
}