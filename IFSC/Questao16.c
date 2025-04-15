Questao22

#include <stdio.h>

int main() {
    float Val1, Val2, Media;

    printf("Digite dois valores: ");
    scanf("%f %f", &Val1, &Val2);

    Media = (Val1 + Val2) / 2;

    printf("Média: %.2f\n", Media);

    return 0;
}
