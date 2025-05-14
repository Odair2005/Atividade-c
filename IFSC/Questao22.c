// Questão 28
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int N, C, D, U, M; // Declaração de variável

    // Lê o número de três algarismos
    printf("Digite um número de três algarismos (N = CDU): "); // Impressão de dados
    scanf("%d", &N); // Leitura de dados

    // Extrai os algarismos C, D e U
    C = N / 100;   // Algarismo das centenas
    D = (N / 10) % 10;  // Algarismo das dezenas
    U = N % 10;    // Algarismo das unidades

    // Calcula o número M com os algarismos em ordem inversa (M = UDC)
    M = (U * 100) + (D * 10) + C;

    // Mostra o número invertido
    printf("O número M (invertido) é: %d\n", M); // Impressão de dados

    return 0; // Retorno da função
}
