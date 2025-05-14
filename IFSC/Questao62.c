// Questão 68
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float salario, desconto; // Declaração de variável

    // Lê o salário do funcionário
    printf("Digite o salário do funcionário: R$ "); // Impressão de dados
    scanf("%f", &salario); // Leitura de dados

    // Calcula o desconto de 11% sobre o salário
    desconto = salario * 0.11;

    // Verifica se o desconto excede o valor máximo de 318,20
    if (desconto > 318.20) { // Estrutura condicional
        desconto = 318.20;
    }

    // Exibe o valor do desconto
    printf("O valor do desconto previdenciário é: R$ %.2f\n", desconto); // Impressão de dados

    return 0; // Retorno da função
}
