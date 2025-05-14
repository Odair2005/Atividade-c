// Questão 26

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float salarioBruto; // Declaração de variável
    float desconto1, desconto2; // Declaração de variável
    float salarioLiquido; // Declaração de variável

    // Pede o salário bruto
    printf("Digite o salário bruto: "); // Impressão de dados
    scanf("%f", &salarioBruto); // Leitura de dados

    // Calcula o primeiro desconto de 10%
    desconto1 = salarioBruto * 0.10;

    // Subtrai o primeiro desconto
    salarioBruto = salarioBruto - desconto1;

    // Calcula o segundo desconto de 5%
    desconto2 = salarioBruto * 0.05;

    // Subtrai o segundo desconto
    salarioLiquido = salarioBruto - desconto2;

    // Mostra o salário líquido
    printf("Salário líquido: R$ %.2f\n", salarioLiquido); // Impressão de dados

    return 0; // Retorno da função
}
