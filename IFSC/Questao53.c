Questão 59
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    for(i = 1; i <= 10; i++) { // Estrutura de repetição
        printf("%d x %d = %d\n", n, i, n * i); // Impressão de dados
    }
    return 0; // Retorno da função
}
