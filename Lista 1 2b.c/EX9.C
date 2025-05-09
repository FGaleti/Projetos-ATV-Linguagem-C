#include <stdio.h>

int main() {
    int numero, maior, menor, primeiroNumero = 1;

    printf("Digite os numeros:\n");

    while (1) {
        scanf("%d", &numero);

        if (numero < 0) {
            break;
        }

        if (primeiroNumero) {
            maior = numero;
            menor = numero;
            primeiroNumero = 0;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    if (primeiroNumero == 0) {
        printf("O maior numero é: %d\n", maior);
        printf("O menor número é: %d\n", menor);
    } else {
        printf("Nenhum numero positivo foi inserido.\n");
    }

    return 0;
}