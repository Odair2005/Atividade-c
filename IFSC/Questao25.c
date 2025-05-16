// Questão 31

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B; // Declaração de variável

    // Lê o primeiro número
    printf("Digite o valor de A: "); // Impressão de dados
    scanf("%d", &A); // Leitura de dados

    // Lê o segundo número
    printf("Digite o valor de B: "); // Impressão de dados
    scanf("%d", &B); // Leitura de dados

    // Verifica qual é o maior número e imprime
    if (A > B) { // Estrutura condicional
        printf("O maior número é: %d\n", A); // Impressão de dados
    } else if (B > A) {
        printf("O maior número é: %d\n", B); // Impressão de dados
    } else {
        printf("Os números são iguais.\n"); // Impressão de dados
    }

    return 0; // Retorno da função
}
