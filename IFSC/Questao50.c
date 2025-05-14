Questão 56
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i, soma = 0; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    for(i = 1; i <= n; i++) { // Estrutura de repetição
        soma += i;
    }
    printf("Soma de 1 a %d = %d\n", n, soma); // Impressão de dados
    return 0; // Retorno da função
}
