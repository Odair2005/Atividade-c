// Questão 21
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B, resultado; // Declaração de variável

    // Lê o primeiro valor inteiro
    printf("Digite o valor de A: "); // Impressão de dados
    scanf("%d", &A); // Leitura de dados

    // Lê o segundo valor inteiro
    printf("Digite o valor de B: "); // Impressão de dados
    scanf("%d", &B); // Leitura de dados

    // Calcula a soma do quadrado de cada valor
    resultado = (A * A) + (B * B);

    // Mostra o resultado
    printf("A soma dos quadrados de A e B é: %d\n", resultado); // Impressão de dados

    return 0; // Retorno da função
}
