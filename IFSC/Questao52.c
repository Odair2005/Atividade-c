// Questão 58
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    for(i = 1; i <= n; i++) { // Estrutura de repetição
        if(n % i == 0) { // Estrutura condicional
            printf("%d ", i); // Impressão de dados
        }
    }
    return 0; // Retorno da função
}
