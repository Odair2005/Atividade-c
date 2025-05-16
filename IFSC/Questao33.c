// Questão 39
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int valor_compra, valor_pago, troco; // Declaração de variável
    int notas_100, notas_10, notas_1; // Declaração de variável

    // Lê o valor da compra e o valor pago
    printf("Digite o valor da compra: "); // Impressão de dados
    scanf("%d", &valor_compra); // Leitura de dados
    printf("Digite o valor pago: "); // Impressão de dados
    scanf("%d", &valor_pago); // Leitura de dados

    // Calcula o troco
    troco = valor_pago - valor_compra;

    // Calcula o número mínimo de notas
    notas_100 = troco / 100;          // Número de notas de 100 reais
    troco = troco % 100;              // Atualiza o troco após retirar as notas de 100 reais

    notas_10 = troco / 10;            // Número de notas de 10 reais
    troco = troco % 10;               // Atualiza o troco após retirar as notas de 10 reais

    notas_1 = troco;                  // O restante será em notas de 1 real

    // Mostra o valor da compra, o valor do troco e a quantidade de cada tipo de nota
    printf("Valor da compra: %d\n", valor_compra); // Impressão de dados
    printf("Valor pago: %d\n", valor_pago); // Impressão de dados
    printf("Troco: %d\n", valor_pago - valor_compra); // Impressão de dados
    printf("Notas de 100 reais: %d\n", notas_100); // Impressão de dados
    printf("Notas de 10 reais: %d\n", notas_10); // Impressão de dados
    printf("Notas de 1 real: %d\n", notas_1); // Impressão de dados

    return 0; // Retorno da função
}
