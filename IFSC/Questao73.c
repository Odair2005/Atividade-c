// Questão 79
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    char estadoCivil; // Declaração de variável

    // Lê a primeira letra do estado civil
    printf("Digite a primeira letra do seu estado civil (S - Solteiro, C - Casado, V - Viúvo, D - Divorciado, Q - Desquitado): "); // Impressão de dados
    scanf("%c", &estadoCivil); // Leitura de dados

    // Converte a letra para maiúscula, se necessário, para padronizar a entrada
    estadoCivil = toupper(estadoCivil);

    // Verifica o estado civil e exibe a mensagem correspondente
    switch (estadoCivil) {
        case 'S':
            printf("Estado Civil: Solteiro\n"); // Impressão de dados
            break;
        case 'C':
            printf("Estado Civil: Casado\n"); // Impressão de dados
            break;
        case 'V':
            printf("Estado Civil: Viúvo\n"); // Impressão de dados
            break;
        case 'D':
            printf("Estado Civil: Divorciado\n"); // Impressão de dados
            break;
        case 'Q':
            printf("Estado Civil: Desquitado\n"); // Impressão de dados
            break;
        default:
            printf("Erro: Letra inválida. Por favor, insira uma das opções válidas.\n"); // Impressão de dados
    }

    return 0; // Retorno da função
}
