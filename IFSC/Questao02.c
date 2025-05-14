// Questão 8
#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    float AREA, BASE, ALTURA; // Declara três variáveis do tipo float (números com vírgula)

    // Pede ao usuário que digite a base do triângulo
    printf("Digite a base do triângulo: ");
    scanf("%f", &BASE); // Lê a base digitada e armazena na variável BASE

    // Pede ao usuário que digite a altura do triângulo
    printf("Digite a altura do triângulo: ");
    scanf("%f", &ALTURA); // Lê a altura digitada e armazena na variável ALTURA

    // Calcula a área usando a fórmula: (base * altura) / 2
    AREA = (BASE * ALTURA) / 2;

    // Mostra o resultado da área calculada
    printf("A área do triângulo é: %.2f\n", AREA);

    return 0; // Encerra o programa
}
