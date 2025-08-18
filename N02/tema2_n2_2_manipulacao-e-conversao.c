#include <stdio.h>

int main () {
    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float

    int c = 10;
    int d = 3;
    float quociente = (float) c / d; // 'c' é explicitamente convertido para float

    printf("Resultado: %.2f\n", resultado);
    printf("Resultado: %.2f\n", quociente);

    return 0;
}