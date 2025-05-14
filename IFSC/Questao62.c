// Questão 68
#include <stdio.h>

int main() {
    float salario, desconto;

    // Lê o salário do funcionário
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    // Calcula o desconto de 11% sobre o salário
    desconto = salario * 0.11;

    // Verifica se o desconto excede o valor máximo de 318,20
    if (desconto > 318.20) {
        desconto = 318.20;
    }

    // Exibe o valor do desconto
    printf("O valor do desconto previdenciário é: R$ %.2f\n", desconto);

    return 0;
}
