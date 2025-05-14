// Questão 41
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float nota1, nota2, nota3, media; // Declaração de variável
    int opcao; // Declaração de variável

    // Lê as três notas
    printf("Digite a primeira nota: "); // Impressão de dados
    scanf("%f", &nota1); // Leitura de dados

    printf("Digite a segunda nota: "); // Impressão de dados
    scanf("%f", &nota2); // Leitura de dados

    printf("Digite a terceira nota: "); // Impressão de dados
    scanf("%f", &nota3); // Leitura de dados

    // Lê a opção de cálculo da média
    printf("Escolha a opção de cálculo da média:\n"); // Impressão de dados
    printf("1 - Média Aritmética\n"); // Impressão de dados
    printf("2 - Média Ponderada (Pesos 3, 3, 4)\n"); // Impressão de dados
    scanf("%d", &opcao); // Leitura de dados

    // Calcula a média de acordo com a opção escolhida
    if (opcao == 1) { // Estrutura condicional
        // Média Aritmética
        media = (nota1 + nota2 + nota3) / 3;
        printf("Média Aritmética: %.2f\n", media); // Impressão de dados
    } else if (opcao == 2) {
        // Média Ponderada
        media = ((nota1 * 3) + (nota2 * 3) + (nota3 * 4)) / (3 + 3 + 4);
        printf("Média Ponderada: %.2f\n", media); // Impressão de dados
    } else {
        printf("Opção inválida!\n"); // Impressão de dados
    }

    return 0; // Retorno da função
}
