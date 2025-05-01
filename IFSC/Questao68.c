Questão 74
  
#include <stdio.h>

int main() {
    char sexo;
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    if(sexo == 'M' || sexo == 'm') {
        printf("Sexo Masculino.\n");
    } else if(sexo == 'F' || sexo == 'f') {
        printf("Sexo Feminino.\n");
    } else {
        printf("Sexo inválido.\n");
    }
    return 0;
}
