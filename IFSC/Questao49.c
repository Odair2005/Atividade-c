// Questão 55

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int n, i, mult = 1; // Declaração de variável
    printf("Digite um numero: "); // Impressão de dados
    scanf("%d", &n); // Leitura de dados
    for(i = 1; i <= 10; i++) { // Estrutura de repetição
        mult = n * i;
        printf("%d x %d = %d\n", n, i, mult); // Impressão de dados
    }
    return 0; // Retorno da função
}
