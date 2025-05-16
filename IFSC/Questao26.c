// Questão 32
  
#include <stdio.h> // Inclusão de biblioteca
int main() { // Função principal
 int ano; // Declaração de variável
 printf("Digite o ano: "); // Impressão de dados
 scanf("%d", &ano); // Leitura de dados
 if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) // Estrutura condicional
 printf("Ano bissexto"); // Impressão de dados
 else // Alternativa condicional
 printf("Não é bissexto"); // Impressão de dados
 return 0; // Retorno da função
}
