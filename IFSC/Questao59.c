Questão 65
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int idade; // Declaração de variável
    printf("Digite sua idade: "); // Impressão de dados
    scanf("%d", &idade); // Leitura de dados
    if(idade >= 18) { // Estrutura condicional
        printf("Você é maior de idade.\n"); // Impressão de dados
    } else {
        printf("Você é menor de idade.\n"); // Impressão de dados
    }
    return 0; // Retorno da função
}
