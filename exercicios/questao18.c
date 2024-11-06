#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0 || numero % 5 == 0) {
        printf("O número %d é múltiplo de 2 ou 5.\n", numero);
    } else {
        printf("O número %d NÃO é múltiplo de 2 nem de 5.\n", numero);
    }

    return 0;
}

