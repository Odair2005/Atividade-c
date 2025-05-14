// Questão 22
#include <stdio.h>

int main() {
    float Val1, Val2, Media;

    // Lê o primeiro valor
    printf("Digite o primeiro valor: ");
    scanf("%f", &Val1);

    // Lê o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%f", &Val2);

    // Calcula a média dos dois valores
    Media = (Val1 + Val2) / 2;

    // Mostra o valor da média
    printf("A média é: %.2f\n", Media);

    return 0;
}
