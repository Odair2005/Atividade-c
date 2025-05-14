Questão 76
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int numero; // Declaração de variável
    printf("Digite um numero entre 1 e 10: "); // Impressão de dados
    scanf("%d", &numero); // Leitura de dados
    while(numero < 1 || numero > 10) { // Estrutura de repetição
        printf("Valor inválido. Digite novamente: "); // Impressão de dados
        scanf("%d", &numero); // Leitura de dados
    }
    printf("Valor aceito: %d\n", numero); // Impressão de dados
    return 0; // Retorno da função
}
