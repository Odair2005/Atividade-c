// Questão 52
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B; // Declaração de variável

    // Lê os dois números
    printf("Digite o primeiro número: "); // Impressão de dados
    scanf("%d", &A); // Leitura de dados

    printf("Digite o segundo número: "); // Impressão de dados
    scanf("%d", &B); // Leitura de dados

    // Verifica se os números são iguais ou diferentes
    if (A == B) { // Estrutura condicional
        printf("Os números são iguais.\n"); // Impressão de dados
    } else {
        printf("Os números são diferentes.\n"); // Impressão de dados

        // Mostra o maior e o menor número
        if (A > B) { // Estrutura condicional
            printf("Maior número: %d\n", A); // Impressão de dados
            printf("Menor número: %d\n", B); // Impressão de dados
        } else {
            printf("Maior número: %d\n", B); // Impressão de dados
            printf("Menor número: %d\n", A); // Impressão de dados
        }
    }

    return 0; // Retorno da função
}
