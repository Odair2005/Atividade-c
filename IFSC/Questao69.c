Questão 75
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int nota; // Declaração de variável
    printf("Digite a nota (0 a 10): "); // Impressão de dados
    scanf("%d", &nota); // Leitura de dados
    if(nota >= 0 && nota <= 10) { // Estrutura condicional
        printf("Nota válida.\n"); // Impressão de dados
    } else {
        printf("Nota inválida.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
