#include <stdio.h>

int main() {
    int n, i;

    printf("informe a quantidade de elementos do vetor: ");
    scanf("%d", &n);

    int v1[n]; 

    printf("informe os elementos do vetor:");
    for (i = 0; i < n; i++) {
        scanf("%d", &v1[i]);
    }

    int maior = v1[0];
    int menor = v1[0];

    for (i = 0; i < n; i++) {
        if (v1[i] > maior) {
            maior = v1[i];
        }
        if (v1[i] < menor) {
            menor = v1[i];
        }
    }

    printf("O maior é: %d\n", maior);
    printf("O menor é: %d\n", menor);

    return 0;
}
