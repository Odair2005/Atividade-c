// Questão 17

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B, C, D; // Declaração de variável

    printf("Digite quatro números: "); // Impressão de dados
    scanf("%d %d %d %d", &A, &B, &C, &D); // Leitura de dados

    printf("A+B = %d, A*B = %d\n", A + B, A * B); // Impressão de dados
    printf("A+C = %d, A*C = %d\n", A + C, A * C); // Impressão de dados
    printf("A+D = %d, A*D = %d\n", A + D, A * D); // Impressão de dados
    printf("B+C = %d, B*C = %d\n", B + C, B * C); // Impressão de dados
    printf("B+D = %d, B*D = %d\n", B + D, B * D); // Impressão de dados
    printf("C+D = %d, C*D = %d\n", C + D, C * D); // Impressão de dados

    return 0; // Retorno da função
}
