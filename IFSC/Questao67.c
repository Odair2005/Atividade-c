Questão 73
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int codigo; // Declaração de variável
    printf("Digite o codigo do produto: "); // Impressão de dados
    scanf("%d", &codigo); // Leitura de dados
    switch(codigo) {
        case 1:
            printf("Produto: Parafuso\n"); // Impressão de dados
            break;
        case 2:
            printf("Produto: Porca\n"); // Impressão de dados
            break;
        case 3:
            printf("Produto: Prego\n"); // Impressão de dados
            break;
        default:
            printf("Produto não encontrado.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
