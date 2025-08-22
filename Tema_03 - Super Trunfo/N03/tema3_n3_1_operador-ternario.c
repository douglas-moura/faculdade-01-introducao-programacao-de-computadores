#include <stdio.h>

int main () {
    int idade = 20, resultado;
    resultado = idade >= 18 ? 1 : 0;

    if (resultado == 1) {
        printf("A pessoa é maior de idade\n");
    } else {
        printf("A pessoa é menor de idade\n");
    }
    
    return 0;
}