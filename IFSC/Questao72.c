// Questão 78
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int I; // Declaração de variável
    float A, B, C; // Declaração de variável

    // Lê os valores
    printf("Digite o valor de I (1, 2 ou 3): "); // Impressão de dados
    scanf("%d", &I); // Leitura de dados

    printf("Digite o valor de A: "); // Impressão de dados
    scanf("%f", &A); // Leitura de dados

    printf("Digite o valor de B: "); // Impressão de dados
    scanf("%f", &B); // Leitura de dados

    printf("Digite o valor de C: "); // Impressão de dados
    scanf("%f", &C); // Leitura de dados

    // Exibe os valores lidos
    printf("\nValores lidos: A = %.2f, B = %.2f, C = %.2f\n", A, B, C); // Impressão de dados

    // Executa a ação dependendo do valor de I
    if (I == 1) { // Estrutura condicional
        // Ordem crescente
        if (A <= B && A <= C) { // Estrutura condicional
            if (B <= C) { // Estrutura condicional
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", A, B, C); // Impressão de dados
            } else {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", A, C, B); // Impressão de dados
            }
        } else if (B <= A && B <= C) {
            if (A <= C) { // Estrutura condicional
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", B, A, C); // Impressão de dados
            } else {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", B, C, A); // Impressão de dados
            }
        } else {
            if (A <= B) { // Estrutura condicional
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", C, A, B); // Impressão de dados
            } else {
                printf("Ordem crescente: %.2f, %.2f, %.2f\n", C, B, A); // Impressão de dados
            }
        }
    } else if (I == 2) {
        // Ordem decrescente
        if (A >= B && A >= C) { // Estrutura condicional
            if (B >= C) { // Estrutura condicional
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", A, B, C); // Impressão de dados
            } else {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", A, C, B); // Impressão de dados
            }
        } else if (B >= A && B >= C) {
            if (A >= C) { // Estrutura condicional
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", B, A, C); // Impressão de dados
            } else {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", B, C, A); // Impressão de dados
            }
        } else {
            if (A >= B) { // Estrutura condicional
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", C, A, B); // Impressão de dados
            } else {
                printf("Ordem decrescente: %.2f, %.2f, %.2f\n", C, B, A); // Impressão de dados
            }
        }
    } else if (I == 3) {
        // Maior entre os outros dois
        if (A >= B && A >= C) { // Estrutura condicional
            if (B >= C) { // Estrutura condicional
                printf("Maior no meio: %.2f, %.2f, %.2f\n", B, A, C); // Impressão de dados
            } else {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", C, A, B); // Impressão de dados
            }
        } else if (B >= A && B >= C) {
            if (A >= C) { // Estrutura condicional
                printf("Maior no meio: %.2f, %.2f, %.2f\n", A, B, C); // Impressão de dados
            } else {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", C, B, A); // Impressão de dados
            }
        } else {
            if (A >= B) { // Estrutura condicional
                printf("Maior no meio: %.2f, %.2f, %.2f\n", B, C, A); // Impressão de dados
            } else {
                printf("Maior no meio: %.2f, %.2f, %.2f\n", A, C, B); // Impressão de dados
            }
        }
    } else {
        // Caso I não seja 1, 2 ou 3
        printf("Opção inválida! I deve ser 1, 2 ou 3.\n"); // Impressão de dados
    }

    return 0; // Retorno da função
}
