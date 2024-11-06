#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("O número %d é divisível por 3 e por 5 ao mesmo tempo.\n", numero);
    } else {
        printf("O número %d NÃO é divisível por 3 e por 5 ao mesmo tempo.\n", numero);
    }

    return 0;
}
