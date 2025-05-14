// Questão 48
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int i, soma = 0; // Declaração de variável
    for(i = 1; i <= 50; i++) { // Estrutura de repetição
        if(i % 2 != 0) // Estrutura condicional
            soma += i;
    }
    printf("Soma dos impares de 1 a 50 = %d\n", soma); // Impressão de dados
    return 0; // Retorno da função
}
