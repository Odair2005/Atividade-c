// Questão 74
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int opcao; // Declaração de variável

    // Exibe o menu de vendas
    printf("Menu de Vendas:\n"); // Impressão de dados
    printf("1 - Venda a Vista\n"); // Impressão de dados
    printf("2 - Venda a Prazo 30 dias\n"); // Impressão de dados
    printf("3 - Venda a Prazo 60 dias\n"); // Impressão de dados
    printf("4 - Venda a Prazo 90 dias\n"); // Impressão de dados
    printf("5 - Venda com Cartão de Débito\n"); // Impressão de dados
    printf("6 - Venda com Cartão de Crédito\n"); // Impressão de dados

    // Lê a opção escolhida pelo usuário
    printf("Escolha a opção: "); // Impressão de dados
    scanf("%d", &opcao); // Leitura de dados

    // Exibe a opção escolhida
    switch (opcao) {
        case 1:
            printf("Você escolheu Venda a Vista.\n"); // Impressão de dados
            break;
        case 2:
            printf("Você escolheu Venda a Prazo 30 dias.\n"); // Impressão de dados
            break;
        case 3:
            printf("Você escolheu Venda a Prazo 60 dias.\n"); // Impressão de dados
            break;
        case 4:
            printf("Você escolheu Venda a Prazo 90 dias.\n"); // Impressão de dados
            break;
        case 5:
            printf("Você escolheu Venda com Cartão de Débito.\n"); // Impressão de dados
            break;
        case 6:
            printf("Você escolheu Venda com Cartão de Crédito.\n"); // Impressão de dados
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n"); // Impressão de dados
    }

    return 0; // Retorno da função
}
