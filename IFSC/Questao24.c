// Questão 30

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int matricula, A, S, D, ano; // Declaração de variável

    // Lê o número da matrícula
    printf("Digite o número de matrícula (AASDDD): "); // Impressão de dados
    scanf("%d", &matricula); // Leitura de dados

    // Extrai os dois primeiros dígitos (A) para o ano
    A = matricula / 10000;  // Primeiros dois dígitos da matrícula
    S = (matricula / 1000) % 10;  // O terceiro dígito (semestre)
    D = matricula % 1000;   // Os quatro últimos dígitos (ordem da matrícula)

    // Calcula o ano da matrícula, considerando que A representa os dois últimos algarismos
    ano = 2000 + A;

    // Exibe o ano e o semestre
    printf("Ano de matrícula: %d\n", ano); // Impressão de dados
    printf("Semestre: %d\n", S); // Impressão de dados

    return 0; // Retorno da função
}
