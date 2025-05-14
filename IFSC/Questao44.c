Questão 50
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i, a = 0, b = 1, c; // Declaração de variável
    printf("Digite o numero de termos: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    for(i = 0; i < n; i++) { // Estrutura de repetição
        printf("%d ", a); // Impressão de dados
        c = a + b;
        a = b;
        b = c;
    }
    return 0; // Retorno da função
}
