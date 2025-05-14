// Questão 51
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B; // Declaração de variável

    // Lê os dois números
    printf("Digite o primeiro número: "); // Impressão de dados
    scanf("%d", &A); // Leitura de dados

    printf("Digite o segundo número: "); // Impressão de dados
    scanf("%d", &B); // Leitura de dados

    // Verifica e mostra qual é o maior número
    if (A > B) { // Estrutura condicional
        printf("O maior número é: %d\n", A); // Impressão de dados
    } else if (B > A) {
        printf("O maior número é: %d\n", B); // Impressão de dados
    } else {
        printf("Os números são iguais.\n"); // Impressão de dados
    }

    return 0; // Retorno da função
}
