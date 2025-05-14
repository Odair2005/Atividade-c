Questão 42
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i, fat = 1; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    for(i = 1; i <= n; i++) { // Estrutura de repetição
        fat *= i;
    }
    printf("Fatorial de %d = %d\n", n, fat); // Impressão de dados
    return 0; // Retorno da função
}
