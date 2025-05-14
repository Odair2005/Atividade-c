Questão 63
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    if(n % 2 == 0) { // Estrutura condicional
        printf("O numero %d é par.\n", n); // Impressão de dados
    } else {
        printf("O numero %d é impar.\n", n); // Impressão de dados
    }
    return 0; // Retorno da função
}
