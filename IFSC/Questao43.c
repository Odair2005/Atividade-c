// Questão 49
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i, primo = 1; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    if(n <= 1) primo = 0; // Estrutura condicional
    for(i = 2; i <= n / 2; i++) { // Estrutura de repetição
        if(n % i == 0) { // Estrutura condicional
            primo = 0;
            break;
        }
    }
    if(primo) // Estrutura condicional
        printf("%d eh primo\n", n); // Impressão de dados
    else // Alternativa condicional
        printf("%d nao eh primo\n", n); // Impressão de dados
    return 0; // Retorno da função
}
