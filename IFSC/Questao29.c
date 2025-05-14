Questão 35
  
#include <stdio.h> // Inclusão de biblioteca
int main() { // Função principal
 float nota1, nota2, media; // Declaração de variável
 printf("Digite a primeira nota: "); // Impressão de dados
 scanf("%f", &nota1); // Leitura de dados
 printf("Digite a segunda nota: "); // Impressão de dados
 scanf("%f", &nota2); // Leitura de dados
 media = (nota1 + nota2) / 2;
 if (media >= 7) // Estrutura condicional
 printf("Aprovado"); // Impressão de dados
 else // Alternativa condicional
 printf("Reprovado"); // Impressão de dados
 return 0; // Retorno da função
}
