// Questão 27
#include <stdio.h>

int main() {
    int A, B, C, D, E, S, DigitoV;

    // Lê os cinco algarismos do código (A, B, C, D e E)
    printf("Digite o primeiro algarismo (A): ");
    scanf("%d", &A);

    printf("Digite o segundo algarismo (B): ");
    scanf("%d", &B);

    printf("Digite o terceiro algarismo (C): ");
    scanf("%d", &C);

    printf("Digite o quarto algarismo (D): ");
    scanf("%d", &D);

    printf("Digite o quinto algarismo (E): ");
    scanf("%d", &E);

    // Calcula o valor de S conforme a fórmula fornecida
    S = (6 * A) + (5 * B) + (4 * C) + (3 * D) + (2 * E);

    // Calcula o dígito verificador (resto da divisão de S por 7)
    DigitoV = S % 7;

    // Mostra o dígito verificador
    printf("O dígito verificador é: %d\n", DigitoV);

    return 0;
}
