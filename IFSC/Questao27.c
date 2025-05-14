Questão 33
  
#include <stdio.h> // Inclusão de biblioteca
int main() { // Função principal
 float preco, novoPreco; // Declaração de variável
 printf("Digite o preço: "); // Impressão de dados
 scanf("%f", &preco); // Leitura de dados
 if (preco > 100) // Estrutura condicional
 novoPreco = preco * 0.9;
 else // Alternativa condicional
 novoPreco = preco;
 printf("Preço final: %.2f", novoPreco); // Impressão de dados
 return 0; // Retorno da função
}
