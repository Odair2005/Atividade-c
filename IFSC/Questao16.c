// Questão 22
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float Val1, Val2, Media; // Declaração de variável

    // Lê o primeiro valor
    printf("Digite o primeiro valor: "); // Impressão de dados
    scanf("%f", &Val1); // Leitura de dados

    // Lê o segundo valor
    printf("Digite o segundo valor: "); // Impressão de dados
    scanf("%f", &Val2); // Leitura de dados

    // Calcula a média dos dois valores
    Media = (Val1 + Val2) / 2;

    // Mostra o valor da média
    printf("A média é: %.2f\n", Media); // Impressão de dados

    return 0; // Retorno da função
}
