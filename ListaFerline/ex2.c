#include <stdio.h>

int main() {
    double numero;
    int contador;  

    for(contador = 0; contador < 5; contador++) {
        printf("Digite o numero %d: ", contador + 1);
        scanf("%lf", &numero);
    }

    printf("A media desses numeros e: %.2lf\n", numero / 5);

    return 0;
}