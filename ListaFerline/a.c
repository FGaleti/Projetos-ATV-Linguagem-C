#include <stdio.h>

int eh_par(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (eh_par(numero)) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }

    return 0;
}