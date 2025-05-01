Questão 52
  
#include <stdio.h>

int main() {
    int n, i, maior, menor;
    printf("Digite um numero: ");
    scanf("%d", &n);
    maior = menor = n;
    for(i = 1; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if(n > maior) maior = n;
        if(n < menor) menor = n;
    }
    printf("Maior: %d, Menor: %d\n", maior, menor);
    return 0;
}
