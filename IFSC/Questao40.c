// Questão 46
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    char nome[100]; // Declaração de variável
    int diarias; // Declaração de variável
    float total, taxa_servicos; // Declaração de variável

    // Lê o nome do cliente
    printf("Digite o nome do cliente: "); // Impressão de dados
    fgets(nome, sizeof(nome), stdin);

    // Lê o número de diárias
    printf("Digite o número de diárias: "); // Impressão de dados
    scanf("%d", &diarias); // Leitura de dados

    // Calcula a taxa de serviços com base no número de diárias
    if (diarias > 15) { // Estrutura condicional
        taxa_servicos = 5.50;  // Taxa de R$ 5.50 por diária se diárias > 15
    } else if (diarias == 15) {
        taxa_servicos = 6.00;  // Taxa de R$ 6.00 por diária se diárias == 15
    } else {
        taxa_servicos = 8.00;  // Taxa de R$ 8.00 por diária se diárias < 15
    }

    // Calcula o total da conta
    total = (60.00 * diarias) + (taxa_servicos * diarias);

    // Exibe o nome do cliente e o total da conta
    printf("Nome do cliente: %s", nome); // Impressão de dados
    printf("Total da conta: R$ %.2f\n", total); // Impressão de dados

    return 0; // Retorno da função
}
