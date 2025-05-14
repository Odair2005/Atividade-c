// Questão 61
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int opcao;

    // Lê as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Lê a opção de cálculo da média
    printf("Escolha a opção de cálculo da média:\n");
    printf("1 - Média Aritmética\n");
    printf("2 - Média Ponderada (Pesos 3, 3, 4)\n");
    scanf("%d", &opcao);

    // Calcula a média de acordo com a opção escolhida
    if (opcao == 1) {
        // Média Aritmética
        media = (nota1 + nota2 + nota3) / 3;
        printf("Média Aritmética: %.2f\n", media);
    } else if (opcao == 2) {
        // Média Ponderada
        media = ((nota1 * 3) + (nota2 * 3) +
