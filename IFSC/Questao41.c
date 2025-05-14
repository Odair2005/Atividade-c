Questão 47
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int i; // Declaração de variável
    for(i = 1; i <= 100; i++) { // Estrutura de repetição
        if(i % 3 == 0 && i % 5 == 0) // Estrutura condicional
            printf("%d ", i); // Impressão de dados
    }
    return 0; // Retorno da função
}
