// Questão 14

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float raio, altura, volume; // Declaração de variável

    // Ler o raio
    printf("Digite o raio da lata: "); // Impressão de dados
    scanf("%f", &raio); // Leitura de dados

    // Ler a altura
    printf("Digite a altura da lata: "); // Impressão de dados
    scanf("%f", &altura); // Leitura de dados

    // Calcular o volume
    volume = 3.14159 * raio * raio * altura;

    // Mostrar o volume
    printf("Volume da lata: %.2f\n", volume); // Impressão de dados

    return 0; // Retorno da função
}
