Questão 80

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int i, soma = 0; // Declaração de variável
    for(i = 1; i <= 100; i++) { // Estrutura de repetição
        soma += i;
    }
    printf("Soma dos numeros de 1 a 100: %d\n", soma); // Impressão de dados
    return 0; // Retorno da função
}
