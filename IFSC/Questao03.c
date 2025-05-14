Questao9

#include <stdio.h> // Inclusão de biblioteca
#include <string.h> // Inclusão de biblioteca

int main() { // Função principal
    char nome[50]; // Declaração de variável
    char sobrenome[50]; // Declaração de variável
    char nome_completo[100]; // Declaração de variável

    // a) Ler o nome
    printf("Digite o nome: "); // Impressão de dados
    scanf("%s", nome); // Leitura de dados

    // b) Ler o sobrenome
    printf("Digite o sobrenome: "); // Impressão de dados
    scanf("%s", sobrenome); // Leitura de dados

    // c) Concatenar nome com sobrenome
    strcpy(nome_completo, nome);      // copia o nome para nome_completo
    strcat(nome_completo, " ");       // adiciona um espaço
    strcat(nome_completo, sobrenome); // adiciona o sobrenome

    // d) Mostrar o nome completo
    printf("Nome completo: %s\n", nome_completo); // Impressão de dados

    return 0; // Retorno da função
}

