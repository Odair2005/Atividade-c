// Questão 30
#include <stdio.h>

int main() {
    int matricula, A, S, D, ano;

    // Lê o número da matrícula
    printf("Digite o número de matrícula (AASDDD): ");
    scanf("%d", &matricula);

    // Extrai os dois primeiros dígitos (A) para o ano
    A = matricula / 10000;  // Primeiros dois dígitos da matrícula
    S = (matricula / 1000) % 10;  // O terceiro dígito (semestre)
    D = matricula % 1000;   // Os quatro últimos dígitos (ordem da matrícula)

    // Calcula o ano da matrícula, considerando que A representa os dois últimos algarismos
    ano = 2000 + A;

    // Exibe o ano e o semestre
    printf("Ano de matrícula: %d\n", ano);
    printf("Semestre: %d\n", S);

    return 0;
}
