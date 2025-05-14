// Questão 64

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    if(n > 0) { // Estrutura condicional
        printf("O numero %d é positivo.\n", n); // Impressão de dados
    } else if(n < 0) {
        printf("O numero %d é negativo.\n", n); // Impressão de dados
    } else {
        printf("O numero é zero.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
