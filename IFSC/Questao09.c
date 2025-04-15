Questao15

#include <stdio.h>

int main() {
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo de viagem (em horas): ");
    scanf("%f", &tempo);

    printf("Digite a velocidade média (em km/h): ");
    scanf("%f", &velocidade);

    distancia = tempo * velocidade;
    litros = distancia / 12;

    printf("Velocidade média: %.2f km/h\n", velocidade);
    printf("Tempo gasto: %.2f horas\n", tempo);
    printf("Distância percorrida: %.2f km\n", distancia);
    printf("Litros usados: %.2f litros\n", litros);

    return 0;
}
