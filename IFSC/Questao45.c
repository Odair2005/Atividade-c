Questão 51
  
#include <stdio.h>

int main() {
    int n, i, soma = 0, count = 0;
    float media;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    int num;
    for(i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num >= 0) {
            soma += num;
            count++;
        }
    }
    if(count > 0) {
        media = (float)soma / count;
        printf("Media dos numeros positivos = %.2f\n", media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }
    return 0;
}
