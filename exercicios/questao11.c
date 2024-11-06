#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 20) {
        printf("O número %d está no intervalo entre 10 e 20.\n", numero);
    } else {
        printf("O número %d NÃO está no intervalo entre 10 e 20.\n", numero);
    }

    return 0;
}
