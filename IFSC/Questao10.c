Questao16

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int A, B, temp; // Declaração de variável

    printf("Digite o valor de A: "); // Impressão de dados
    scanf("%d", &A); // Leitura de dados

    printf("Digite o valor de B: "); // Impressão de dados
    scanf("%d", &B); // Leitura de dados

    temp = A;
    A = B;
    B = temp;

    printf("Valores trocados: A = %d, B = %d\n", A, B); // Impressão de dados

    return 0; // Retorno da função
}
