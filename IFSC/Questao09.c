// Questão 15
#include <stdio.h>

int main() {
    float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS;

    // Solicita o tempo gasto na viagem (em horas)
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &TEMPO);

    // Solicita a velocidade média durante a viagem (em km/h)
    printf("Digite a velocidade média durante a viagem (em km/h): ");
    scanf("%f", &VELOCIDADE);

    // Calcula a distância percorrida
    DISTANCIA = TEMPO * VELOCIDADE;

    // Calcula a quantidade de litros usados (12 km por litro)
    LITROS_USADOS = DISTANCIA / 12;

    // Mostra os resultados
    printf("Velocidade média: %.2f km/h\n", VELOCIDADE);
    printf("Tempo gasto: %.2f horas\n", TEMPO);
    printf("Distância percorrida: %.2f km\n", DISTANCIA);
    printf("Litros de combustível usados: %.2f litros\n", LITROS_USADOS);

    return 0;
}
