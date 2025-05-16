// Questão 15
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float TEMPO, VELOCIDADE, DISTANCIA, LITROS_USADOS; // Declaração de variável

    // Solicita o tempo gasto na viagem (em horas)
    printf("Digite o tempo gasto na viagem (em horas): "); // Impressão de dados
    scanf("%f", &TEMPO); // Leitura de dados

    // Solicita a velocidade média durante a viagem (em km/h)
    printf("Digite a velocidade média durante a viagem (em km/h): "); // Impressão de dados
    scanf("%f", &VELOCIDADE); // Leitura de dados

    // Calcula a distância percorrida
    DISTANCIA = TEMPO * VELOCIDADE;

    // Calcula a quantidade de litros usados (12 km por litro)
    LITROS_USADOS = DISTANCIA / 12;

    // Mostra os resultados
    printf("Velocidade média: %.2f km/h\n", VELOCIDADE); // Impressão de dados
    printf("Tempo gasto: %.2f horas\n", TEMPO); // Impressão de dados
    printf("Distância percorrida: %.2f km\n", DISTANCIA); // Impressão de dados
    printf("Litros de combustível usados: %.2f litros\n", LITROS_USADOS); // Impressão de dados

    return 0; // Retorno da função
}
