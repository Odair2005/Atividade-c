Questao19

#include <stdio.h>

int main() {
    int valor, quadrado, cubo;

    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    quadrado = valor * valor;
    cubo = valor * valor * valor;

    printf("Quadrado: %d\n", quadrado);
    printf("Cubo: %d\n", cubo);

    return 0;
}
