Questão 67
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int a, b, c; // Declaração de variável
    printf("Digite três numeros: "); // Impressão de dados
    scanf("%d %d %d", &a, &b, &c); // Leitura de dados
    if(a < b && a < c) { // Estrutura condicional
        printf("O menor numero é: %d\n", a); // Impressão de dados
    } else if(b < a && b < c) {
        printf("O menor numero é: %d\n", b); // Impressão de dados
    } else {
        printf("O menor numero é: %d\n", c); // Impressão de dados
    }
    return 0; // Retorno da função
}
