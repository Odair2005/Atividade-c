Questão 45
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i, soma = 0; // Declaração de variável
    printf("Digite a quantidade de numeros: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    int num; // Declaração de variável
    for(i = 0; i < n; i++) { // Estrutura de repetição
        printf("Digite um numero: "); // Impressão de dados
        scanf("%d", &num); // Leitura de dados
        soma += num;
    }
    printf("Soma = %d\n", soma); // Impressão de dados
    return 0; // Retorno da função
}
