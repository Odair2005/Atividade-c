Quesatao24

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float kmh, ms; // Declaração de variável

    printf("Digite a velocidade em km/h: "); // Impressão de dados
    scanf("%f", &kmh); // Leitura de dados

    ms = kmh / 3.6;

    printf("Velocidade em m/s: %.2f\n", ms); // Impressão de dados

    return 0; // Retorno da função
}
