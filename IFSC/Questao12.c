Questao18

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float comprimento, largura, altura, volume; // Declaração de variável

    printf("Digite o comprimento: "); // Impressão de dados
    scanf("%f", &comprimento); // Leitura de dados

    printf("Digite a largura: "); // Impressão de dados
    scanf("%f", &largura); // Leitura de dados

    printf("Digite a altura: "); // Impressão de dados
    scanf("%f", &altura); // Leitura de dados

    volume = comprimento * largura * altura;

    printf("Volume da caixa: %.2f\n", volume); // Impressão de dados

    return 0; // Retorno da função
}
