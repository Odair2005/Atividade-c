Questão 30
  
#include <stdio.h>
int main() {
 int A, B;
 printf("Digite o valor de A: ");
 scanf("%d", &A);
 printf("Digite o valor de B: ");
 scanf("%d", &B);
 if (A == B)
 printf("Valores iguais");
 else if (A > B)
 printf("Maior: %d", A);
 else
 printf("Maior: %d", B);
 return 0;
}
