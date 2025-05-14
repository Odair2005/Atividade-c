Questão 71

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    if(n % 3 == 0) { // Estrutura condicional
        printf("O numero é divisível por 3.\n"); // Impressão de dados
    } else if(n % 5 == 0) {
        printf("O numero é divisível por 5.\n"); // Impressão de dados
    } else {
        printf("O numero não é divisível por 3 nem por 5.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
