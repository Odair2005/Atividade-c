// Questão 60
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int codigo, quantidade; // Declaração de variável
    float preco_unitario, total; // Declaração de variável

    // Exibe o cardápio
    printf("Cardápio:\n"); // Impressão de dados
    printf("100 - Cachorro quente - R$ 1,10\n"); // Impressão de dados
    printf("101 - Bauru simples - R$ 1,30\n"); // Impressão de dados
    printf("102 - Bauru c/ ovo - R$ 1,50\n"); // Impressão de dados
    printf("103 - Hamburger - R$ 1,10\n"); // Impressão de dados
    printf("104 - Cheeseburger - R$ 1,30\n"); // Impressão de dados
    printf("105 - Refrigerante - R$ 1,00\n"); // Impressão de dados

    // Lê o código do item e a quantidade
    printf("Digite o código do item: "); // Impressão de dados
    scanf("%d", &codigo); // Leitura de dados

    printf("Digite a quantidade: "); // Impressão de dados
    scanf("%d", &quantidade); // Leitura de dados

    // Determina o preço unitário baseado no código
    switch (codigo) {
        case 100:
            preco_unitario = 1.10;
            break;
        case 101:
            preco_unitario = 1.30;
            break;
        case 102:
            preco_unitario = 1.50;
            break;
        case 103:
            preco_unitario = 1.10;
            break;
        case 104:
            preco_unitario = 1.30;
            break;
        case 105:
            preco_unitario = 1.00;
            break;
        default:
            printf("Código inválido.\n"); // Impressão de dados
            return 1;  // Termina o programa se o código for inválido // Retorno da função
    }

    // Calcula o valor total a ser pago
    total = preco_unitario * quantidade;

    // Exibe o valor a ser pago
    printf("Total a ser pago: R$ %.2f\n", total); // Impressão de dados

    return 0; // Retorno da função
}
