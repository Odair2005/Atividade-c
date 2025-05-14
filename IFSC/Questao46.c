// Questão 52
#include <stdio.h>

int main() {
    int A, B;

    // Lê os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &A);

    printf("Digite o segundo número: ");
    scanf("%d", &B);

    // Verifica se os números são iguais ou diferentes
    if (A == B) {
        printf("Os números são iguais.\n");
    } else {
        printf("Os números são diferentes.\n");

        // Mostra o maior e o menor número
        if (A > B) {
            printf("Maior número: %d\n", A);
            printf("Menor número: %d\n", B);
        } else {
            printf("Maior número: %d\n", B);
            printf("Menor número: %d\n", A);
        }
    }

    return 0;
}
