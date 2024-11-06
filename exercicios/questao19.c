#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite o primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o segundo lado: ");
    scanf("%f", &b);
    printf("Digite o terceiro lado: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("Os valores %.2f, %.2f e %.2f PODEM formar um triângulo.\n", a, b, c);
    } else {
        printf("Os valores %.2f, %.2f e %.2f NÃO PODEM formar um triângulo.\n", a, b, c);
    }

    return 0;
}
