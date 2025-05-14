Questao7

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float raio, area; // Declaração de variável

    printf("Digite o raio: "); // Impressão de dados
    scanf("%f", &raio); // Leitura de dados

    area = 3.14159 * raio * raio;

    printf("A área da circunferência é: %.2f\n", area); // Impressão de dados

    return 0; // Retorno da função
}
