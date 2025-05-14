// Questão 51
#include <stdio.h>

int main() {
    int A, B;

    // Lê os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &A);

    printf("Digite o segundo número: ");
    scanf("%d", &B);

    // Verifica e mostra qual é o maior número
    if (A > B) {
        printf("O maior número é: %d\n", A);
    } else if (B > A) {
        printf("O maior número é: %d\n", B);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}
