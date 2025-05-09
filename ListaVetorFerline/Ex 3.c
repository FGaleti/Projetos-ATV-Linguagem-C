#include <stdio.h>

int main() {
    int v1[10], v2[10];
    int numero = 0, cont = 0;
    int i, j;

    for (i = 0; i < 10; i++) {
        printf("Informe um número: ");
        scanf("%d", &numero);
        v1[i] = numero;
    }

    for (i = 0, j = 9; i < 10; i++, j--) {
        v2[j] = v1[i];
    }

 
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (v1[i] == v1[j]) {
                printf("Numero repetido: %d\n", v1[i]);
                cont++;

            }
        }
    }
    
    printf("Total de repetiçoes: %d\n", cont);
    return 0;
}
