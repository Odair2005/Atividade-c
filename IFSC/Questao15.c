// Questão 21
#include <stdio.h>

int main() {
    int A, B, resultado;

    // Lê o primeiro valor inteiro
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    // Lê o segundo valor inteiro
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Calcula a soma do quadrado de cada valor
    resultado = (A * A) + (B * B);

    // Mostra o resultado
    printf("A soma dos quadrados de A e B é: %d\n", resultado);

    return 0;
}
