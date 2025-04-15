Questao20

#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &A, &B);

    resultado = (A + B) * (A + B);

    printf("Quadrado da soma: %d\n", resultado);

    return 0;
}
