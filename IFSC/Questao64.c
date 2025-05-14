// Questão 70
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    if(n % 3 == 0 && n % 5 == 0) { // Estrutura condicional
        printf("O numero é divisível por 3 e 5.\n"); // Impressão de dados
    } else {
        printf("O numero não é divisível por 3 e 5.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
