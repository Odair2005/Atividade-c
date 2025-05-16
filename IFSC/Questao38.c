// Questão 44
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int i; // Declaração de variável
    for(i = 1; i <= 100; i++) { // Estrutura de repetição
        if(i % 2 == 0) // Estrutura condicional
            printf("%d ", i); // Impressão de dados
    }
    return 0; // Retorno da função
}
