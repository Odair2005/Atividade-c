Questão 77
  
#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    char nome[50]; // Declaração de variável
    int idade; // Declaração de variável
    float salario; // Declaração de variável
    char sexo, estado_civil; // Declaração de variável

    do { // Estrutura de repetição
        printf("Digite o nome: "); // Impressão de dados
        scanf("%s", nome); // Leitura de dados
    } while(strlen(nome) <= 3);

    do { // Estrutura de repetição
        printf("Digite a idade: "); // Impressão de dados
        scanf("%d", &idade); // Leitura de dados
    } while(idade < 0 || idade > 150);

    do { // Estrutura de repetição
        printf("Digite o salario: "); // Impressão de dados
        scanf("%f", &salario); // Leitura de dados
    } while(salario <= 0);

    do { // Estrutura de repetição
        printf("Digite o sexo (M/F): "); // Impressão de dados
        scanf(" %c", &sexo); // Leitura de dados
    } while(sexo != 'M' && sexo != 'F' && sexo != 'm' && sexo != 'f');

    do { // Estrutura de repetição
        printf("Digite o estado civil (s/c/v/d): "); // Impressão de dados
        scanf(" %c", &estado_civil); // Leitura de dados
    } while(estado_civil != 's' && estado_civil != 'c' && estado_civil != 'v' && estado_civil != 'd');

    printf("Cadastro concluído.\n"); // Impressão de dados
    return 0; // Retorno da função
}
