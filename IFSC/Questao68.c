// Questão 74
#include <stdio.h>

int main() {
    int opcao;

    // Exibe o menu de vendas
    printf("Menu de Vendas:\n");
    printf("1 - Venda a Vista\n");
    printf("2 - Venda a Prazo 30 dias\n");
    printf("3 - Venda a Prazo 60 dias\n");
    printf("4 - Venda a Prazo 90 dias\n");
    printf("5 - Venda com Cartão de Débito\n");
    printf("6 - Venda com Cartão de Crédito\n");

    // Lê a opção escolhida pelo usuário
    printf("Escolha a opção: ");
    scanf("%d", &opcao);

    // Exibe a opção escolhida
    switch (opcao) {
        case 1:
            printf("Você escolheu Venda a Vista.\n");
            break;
        case 2:
            printf("Você escolheu Venda a Prazo 30 dias.\n");
            break;
        case 3:
            printf("Você escolheu Venda a Prazo 60 dias.\n");
            break;
        case 4:
            printf("Você escolheu Venda a Prazo 90 dias.\n");
            break;
        case 5:
            printf("Você escolheu Venda com Cartão de Débito.\n");
            break;
        case 6:
            printf("Você escolheu Venda com Cartão de Crédito.\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção válida.\n");
    }

    return 0;
}
