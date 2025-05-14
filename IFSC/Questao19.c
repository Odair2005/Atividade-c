Questao25

#include <stdio.h> // Inclusão de biblioteca

int main() { // Função principal
    int Int1, Int2, quociente, resto; // Declaração de variável

    printf("Digite dois números inteiros: "); // Impressão de dados
    scanf("%d %d", &Int1, &Int2); // Leitura de dados

    quociente = Int1 / Int2;
    resto = Int1 % Int2;

    printf("Quociente: %d\n", quociente); // Impressão de dados
    printf("Resto: %d\n", resto); // Impressão de dados

    return 0; // Retorno da função
}
