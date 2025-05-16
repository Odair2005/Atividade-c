// Questão 10
#include <stdio.h> // Biblioteca para entrada e saída de dados // Inclusão de biblioteca

int main() { // Função principal
    int num1, num2, soma; // Declara três variáveis inteiras // Declaração de variável

    // a) Lê o primeiro número inteiro
    printf("Digite o primeiro número inteiro: "); // Impressão de dados
    scanf("%d", &num1); // Leitura de dados

    // b) Lê o segundo número inteiro
    printf("Digite o segundo número inteiro: "); // Impressão de dados
    scanf("%d", &num2); // Leitura de dados

    // c) Efetua a adição dos dois valores
    soma = num1 + num2;

    // d) Apresenta o valor calculado
    printf("A soma dos dois números é: %d\n", soma); // Impressão de dados

    return 0; // Finaliza o programa // Retorno da função
}
