Questão 69
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int a, b; // Declaração de variável
    printf("Digite dois numeros: "); // Impressão de dados
    scanf("%d %d", &a, &b); // Leitura de dados
    if(b != 0) { // Estrutura condicional
        printf("Resultado da divisão: %.2f\n", (float)a / b); // Impressão de dados
    } else {
        printf("Erro! Divisão por zero.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
