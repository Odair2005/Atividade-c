// Questão 72
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int senha; // Declaração de variável
    printf("Digite a senha: "); // Impressão de dados
    scanf("%d", &senha); // Leitura de dados
    if(senha == 1234) { // Estrutura condicional
        printf("Acesso permitido.\n"); // Impressão de dados
    } else {
        printf("Acesso negado.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
