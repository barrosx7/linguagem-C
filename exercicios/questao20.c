#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 != 0 && numero > 10) {
        printf("O número %d é ímpar e maior que 10.\n", numero);
    } else {
        printf("O número %d NÃO é ímpar e maior que 10.\n", numero);
    }

    return 0;
}
