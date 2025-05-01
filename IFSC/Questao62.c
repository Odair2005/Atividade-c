Questão 68
  
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Digite três numeros: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a == b && b == c) {
        printf("Todos os numeros são iguais.\n");
    } else if(a == b || b == c || a == c) {
        printf("Dois numeros são iguais.\n");
    } else {
        printf("Nenhum numero é igual.\n");
    }
    return 0;
}
