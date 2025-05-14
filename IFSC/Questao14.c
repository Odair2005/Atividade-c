// Questão 20
#include <stdio.h>

int main() {
    int A, B, resultado;

    // Lê o primeiro valor inteiro
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    // Lê o segundo valor inteiro
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Calcula o quadrado da soma de A e B
    resultado = (A + B) * (A + B);

    // Mostra o resultado
    printf("O quadrado da soma de A e B é: %d\n", resultado);

    return 0;
}
