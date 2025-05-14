// Questão 78
#include <stdio.h>

int main() {
    int I;
    float A, B, C;

    // Lê os valores
    printf("Digite o valor de I (1, 2 ou 3): ");
    scanf("%d", &I);

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Exibe os valores lidos
    printf("\nValores lidos: A = %.2f, B = %.2f, C = %.2f\n", A, B, C);

    // Executa a ação dependendo do valor de I
    if (I == 1) {
        // Ordem crescente
        if (A <= B && A <= C) {
            if (B <= C) {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", A, B, C);
            } else {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", A, C, B);
            }
        } else if (B <= A && B <= C) {
            if (A <= C) {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", B, A, C);
            } else {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", B, C, A);
            }
        } else {
            if (A <= B) {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", C, A, B);
            } else {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", C, B, A);
            }
        }
    } else if (I == 2) {
        // Ordem decrescente
        if (A >= B && A >= C) {
            if (B >= C) {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", A, B, C);
            } else {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", A, C, B);
            }
        } else if (B >= A && B >= C) {
            if (A >= C) {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", B, A, C);
            } else {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", B, C, A);
            }
        } else {
            if (A >= B) {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", C, A, B);
            } else {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", C, B, A);
            }
        }
    } else if (I == 3) {
        // Maior entre os outros dois
        if (A >= B && A >= C) {
            if (B >= C) {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", B, A, C);
            } else {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", C, A, B);
            }
        } else if (B >= A && B >= C) {
            if (A >= C) {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", A, B, C);
            } else {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", C, B, A);
            }
        } else {
            if (A >= B) {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", B, C, A);
            } else {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", A, C, B);
            }
        }
    } else {
        // Caso I não seja 1, 2 ou 3
        printf("Opção inválida! I deve ser 1, 2 ou 3.\n");
    }

    return 0;
}
