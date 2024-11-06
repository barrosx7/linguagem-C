#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero < 30 || numero > 60) {
        printf("O número %d está FORA do intervalo entre 30 e 60.\n", numero);
    } else {
        printf("O número %d está DENTRO do intervalo entre 30 e 60.\n", numero);
    }

    return 0;
}
