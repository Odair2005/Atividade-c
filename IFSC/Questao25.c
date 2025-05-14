// Questão 31
#include <stdio.h>

int main() {
    int A, B;

    // Lê o primeiro número
    printf("Digite o valor de A: ");
    scanf("%d", &A);

    // Lê o segundo número
    printf("Digite o valor de B: ");
    scanf("%d", &B);

    // Verifica qual é o maior número e imprime
    if (A > B) {
        printf("O maior número é: %d\n", A);
    } else if (B > A) {
        printf("O maior número é: %d\n", B);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
