// Questão 19
#include <stdio.h>

int main() {
    int valor, quadrado, cubo;

    // Lê um valor inteiro fornecido pelo usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    // Calcula o quadrado do valor
    quadrado = valor * valor;

    // Calcula o cubo do valor
    cubo = valor * valor * valor;

    // Mostra os resultados
    printf("Quadrado: %d\n", quadrado);
    printf("Cubo: %d\n", cubo);

    return 0;
}
