Questao8

#include <stdio.h>

int main() {
    // Declaração das variáveis
    float base, altura, area;

    // Solicitando a base e altura do triângulo
    printf("Digite o valor da base do triângulo: ");
    scanf("%f", &base);

    printf("Digite o valor da altura do triângulo: ");
    scanf("%f", &altura);

    // Calculando a área do triângulo
    area = (base * altura) / 2;

    // Exibindo a área
    printf("A área do triângulo é: %.2f\n", area);

    return 0;
}
