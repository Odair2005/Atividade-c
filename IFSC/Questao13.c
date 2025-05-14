// Questão 19
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int valor, quadrado, cubo; // Declaração de variável

    // Lê um valor inteiro fornecido pelo usuário
    printf("Digite um número inteiro: "); // Impressão de dados
    scanf("%d", &valor); // Leitura de dados

    // Calcula o quadrado do valor
    quadrado = valor * valor;

    // Calcula o cubo do valor
    cubo = valor * valor * valor;

    // Mostra os resultados
    printf("Quadrado: %d\n", quadrado); // Impressão de dados
    printf("Cubo: %d\n", cubo); // Impressão de dados

    return 0; // Retorno da função
}
