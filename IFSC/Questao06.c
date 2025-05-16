// Questão 12

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float C, F; // Declaração de variável

    // Ler a temperatura em Celsius
    printf("Digite a temperatura em Celsius: "); // Impressão de dados
    scanf("%f", &C); // Leitura de dados

    // Calcular Fahrenheit
    F = (9 * C + 160) / 5;

    // Mostrar o resultado
    printf("Temperatura em Fahrenheit: %.2f\n", F); // Impressão de dados

    return 0; // Retorno da função
}
