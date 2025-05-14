Questao11

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    float HT, VH, PD;        // Horas trabalhadas, valor por hora, percentual de desconto // Declaração de variável
    float SB, TD, SL;        // Salário bruto, total de desconto, salário líquido // Declaração de variável

    // a) Obter horas trabalhadas
    printf("Digite as horas trabalhadas (HT): "); // Impressão de dados
    scanf("%f", &HT); // Leitura de dados

    // b) Obter valor da hora trabalhada
    printf("Digite o valor da hora trabalhada (VH): "); // Impressão de dados
    scanf("%f", &VH); // Leitura de dados

    // c) Obter percentual de desconto
    printf("Digite o percentual de desconto (PD): "); // Impressão de dados
    scanf("%f", &PD); // Leitura de dados

    // d) Calcular salário bruto
    SB = HT * VH;

    // e) Calcular total de desconto
    TD = (PD / 100) * SB;

    // f) Calcular salário líquido
    SL = SB - TD;

    // g) Mostrar os resultados
    printf("\n--- Resultado ---\n"); // Impressão de dados
    printf("Horas Trabalhadas: %.2f\n", HT); // Impressão de dados
    printf("Salário Bruto: R$ %.2f\n", SB); // Impressão de dados
    printf("Desconto: R$ %.2f\n", TD); // Impressão de dados
    printf("Salário Líquido: R$ %.2f\n", SL); // Impressão de dados

    return 0; // Retorno da função
}
