// Questão 39
#include <stdio.h>

int main() {
    int valor_compra, valor_pago, troco;
    int notas_100, notas_10, notas_1;

    // Lê o valor da compra e o valor pago
    printf("Digite o valor da compra: ");
    scanf("%d", &valor_compra);
    printf("Digite o valor pago: ");
    scanf("%d", &valor_pago);

    // Calcula o troco
    troco = valor_pago - valor_compra;

    // Calcula o número mínimo de notas
    notas_100 = troco / 100;          // Número de notas de 100 reais
    troco = troco % 100;              // Atualiza o troco após retirar as notas de 100 reais

    notas_10 = troco / 10;            // Número de notas de 10 reais
    troco = troco % 10;               // Atualiza o troco após retirar as notas de 10 reais

    notas_1 = troco;                  // O restante será em notas de 1 real

    // Mostra o valor da compra, o valor do troco e a quantidade de cada tipo de nota
    printf("Valor da compra: %d\n", valor_compra);
    printf("Valor pago: %d\n", valor_pago);
    printf("Troco: %d\n", valor_pago - valor_compra);
    printf("Notas de 100 reais: %d\n", notas_100);
    printf("Notas de 10 reais: %d\n", notas_10);
    printf("Notas de 1 real: %d\n", notas_1);

    return 0;
}
