// Questão 60
#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco_unitario, total;

    // Exibe o cardápio
    printf("Cardápio:\n");
    printf("100 - Cachorro quente - R$ 1,10\n");
    printf("101 - Bauru simples - R$ 1,30\n");
    printf("102 - Bauru c/ ovo - R$ 1,50\n");
    printf("103 - Hamburger - R$ 1,10\n");
    printf("104 - Cheeseburger - R$ 1,30\n");
    printf("105 - Refrigerante - R$ 1,00\n");

    // Lê o código do item e a quantidade
    printf("Digite o código do item: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

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
            printf("Código inválido.\n");
            return 1;  // Termina o programa se o código for inválido
    }

    // Calcula o valor total a ser pago
    total = preco_unitario * quantidade;

    // Exibe o valor a ser pago
    printf("Total a ser pago: R$ %.2f\n", total);

    return 0;
}
