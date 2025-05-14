// Questão 13

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float F, C; // Declaração de variável

    // Ler a temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: "); // Impressão de dados
    scanf("%f", &F); // Leitura de dados

    // Calcular Celsius
    C = (F - 32) * 5 / 9;

    // Mostrar o resultado
    printf("Temperatura em Celsius: %.2f\n", C); // Impressão de dados

    return 0; // Retorno da função
}
