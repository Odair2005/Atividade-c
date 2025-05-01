Questao 27
#include <stdio.h>

int main() {
    int codigo;
    int A, B, C, D, E;
    int S, DigitoV;

    printf("Digite um código de 5 algarismos: ");
    scanf("%d", &codigo);

    // Verifica se o código tem exatamente 5 dígitos
    if (codigo < 10000 || codigo > 99999) {
        printf("Código inválido! Deve conter exatamente 5 dígitos.\n");
        return 1;
    }

    // Extrai os algarismos individuais
    A = (codigo / 10000) % 10;
    B = (codigo / 1000) % 10;
    C = (codigo / 100) % 10;
    D = (codigo / 10) % 10;
    E = codigo % 10;

    // Calcula a soma ponderada
    S = 6*A + 5*B + 4*C + 3*D + 2*E;

    // Calcula o dígito verificador módulo 7
    DigitoV = S % 7;

    printf("O dígito verificador para o código %d é: %d\n", codigo, DigitoV);

    return 0;
}
