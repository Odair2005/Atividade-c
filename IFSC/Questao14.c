// Questão 20
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B, resultado; // Declaração de variável

    // Lê o primeiro valor inteiro
    printf("Digite o valor de A: "); // Impressão de dados
    scanf("%d", &A); // Leitura de dados

    // Lê o segundo valor inteiro
    printf("Digite o valor de B: "); // Impressão de dados
    scanf("%d", &B); // Leitura de dados

    // Calcula o quadrado da soma de A e B
    resultado = (A + B) * (A + B);

    // Mostra o resultado
    printf("O quadrado da soma de A e B é: %d\n", resultado); // Impressão de dados

    return 0; // Retorno da função
}
