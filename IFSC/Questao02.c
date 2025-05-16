// Questão 8
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída // Inclusão de biblioteca

int main() { // Função principal
    float AREA, BASE, ALTURA; // Declara três variáveis do tipo float (números com vírgula) // Declaração de variável

    // Pede ao usuário que digite a base do triângulo
    printf("Digite a base do triângulo: "); // Impressão de dados
    scanf("%f", &BASE); // Lê a base digitada e armazena na variável BASE // Leitura de dados

    // Pede ao usuário que digite a altura do triângulo
    printf("Digite a altura do triângulo: "); // Impressão de dados
    scanf("%f", &ALTURA); // Lê a altura digitada e armazena na variável ALTURA // Leitura de dados

    // Calcula a área usando a fórmula: (base * altura) / 2
    AREA = (BASE * ALTURA) / 2;

    // Mostra o resultado da área calculada
    printf("A área do triângulo é: %.2f\n", AREA); // Impressão de dados

    return 0; // Encerra o programa // Retorno da função
}
