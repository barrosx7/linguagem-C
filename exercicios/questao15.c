#include <stdio.h>

int main() {
    int idade;
    float altura;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    if (idade >= 12 && altura >= 1.50) {
        printf("Você pode entrar no brinquedo!\n");
    } else {
        printf("Você NÃO pode entrar no brinquedo.\n");
    }

    return 0;
}
