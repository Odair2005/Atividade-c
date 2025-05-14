// Questão 10
#include <stdio.h> // Biblioteca para entrada e saída de dados

int main() {
    int num1, num2, soma; // Declara três variáveis inteiras

    // a) Lê o primeiro número inteiro
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    // b) Lê o segundo número inteiro
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // c) Efetua a adição dos dois valores
    soma = num1 + num2;

    // d) Apresenta o valor calculado
    printf("A soma dos dois números é: %d\n", soma);

    return 0; // Finaliza o programa
}
