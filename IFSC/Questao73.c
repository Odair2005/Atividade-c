// Questão 79
#include <stdio.h>

int main() {
    char estadoCivil;

    // Lê a primeira letra do estado civil
    printf("Digite a primeira letra do seu estado civil (S - Solteiro, C - Casado, V - Viúvo, D - Divorciado, Q - Desquitado): ");
    scanf("%c", &estadoCivil);

    // Converte a letra para maiúscula, se necessário, para padronizar a entrada
    estadoCivil = toupper(estadoCivil);

    // Verifica o estado civil e exibe a mensagem correspondente
    switch (estadoCivil) {
        case 'S':
            printf("Estado Civil: Solteiro\n");
            break;
        case 'C':
            printf("Estado Civil: Casado\n");
            break;
        case 'V':
            printf("Estado Civil: Viúvo\n");
            break;
        case 'D':
            printf("Estado Civil: Divorciado\n");
            break;
        case 'Q':
            printf("Estado Civil: Desquitado\n");
            break;
        default:
            printf("Erro: Letra inválida. Por favor, insira uma das opções válidas.\n");
    }

    return 0;
}
