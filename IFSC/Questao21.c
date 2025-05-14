// Questão 27

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B, C, D, E, S, DigitoV; // Declaração de variável

    // Lê os cinco algarismos do código (A, B, C, D e E)
    printf("Digite o primeiro algarismo (A): "); // Impressão de dados
    scanf("%d", &A); // Leitura de dados

    printf("Digite o segundo algarismo (B): "); // Impressão de dados
    scanf("%d", &B); // Leitura de dados

    printf("Digite o terceiro algarismo (C): "); // Impressão de dados
    scanf("%d", &C); // Leitura de dados

    printf("Digite o quarto algarismo (D): "); // Impressão de dados
    scanf("%d", &D); // Leitura de dados

    printf("Digite o quinto algarismo (E): "); // Impressão de dados
    scanf("%d", &E); // Leitura de dados

    // Calcula o valor de S conforme a fórmula fornecida
    S = (6 * A) + (5 * B) + (4 * C) + (3 * D) + (2 * E);

    // Calcula o dígito verificador (resto da divisão de S por 7)
    DigitoV = S % 7;

    // Mostra o dígito verificador
    printf("O dígito verificador é: %d\n", DigitoV); // Impressão de dados

    return 0; // Retorno da função
}
