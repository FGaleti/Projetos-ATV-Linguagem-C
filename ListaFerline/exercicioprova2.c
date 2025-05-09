#include <stdio.h>

int main() {
    int numeros[5];
    int i, GuardarMenor;
    
    for (i = 0; i < 5; i++) {
        printf("numeros %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    if (numeros[0] < numeros[1]) {
        GuardarMenor = numeros[0];
        numeros[0] = numeros[1];
        numeros[1] = GuardarMenor;
    }
    if (numeros[0] < numeros[2]) {
        GuardarMenor = numeros[0];
        numeros[0] = numeros[2];
        numeros[2] = GuardarMenor;
    }
    if (numeros[0] < numeros[3]) {
        GuardarMenor = numeros[0];
        numeros[0] = numeros[3];
        numeros[3] = GuardarMenor;
    }
    if (numeros[0] < numeros[4]) {
        GuardarMenor = numeros[0];
        numeros[0] = numeros[4];
        numeros[4] = GuardarMenor;
    }

    if (numeros[1] < numeros[2]) {
        GuardarMenor = numeros[1];
        numeros[1] = numeros[2];
        numeros[2] = GuardarMenor;
    }
    if (numeros[1] < numeros[3]) {
        GuardarMenor = numeros[1];
        numeros[1] = numeros[3];
        numeros[3] = GuardarMenor;
    }
    if (numeros[1] < numeros[4]) {
        GuardarMenor = numeros[1];
        numeros[1] = numeros[4];
        numeros[4] = GuardarMenor;
    }

    if (numeros[2] < numeros[3]) {
        GuardarMenor = numeros[2];
        numeros[2] = numeros[3];
        numeros[3] = GuardarMenor;
    }
    if (numeros[2] < numeros[4]) {
        GuardarMenor = numeros[2];
        numeros[2] = numeros[4];
        numeros[4] = GuardarMenor;
    }

    if (numeros[3] < numeros[4]) {
        GuardarMenor = numeros[3];
        numeros[3] = numeros[4];
        numeros[4] = GuardarMenor;
    }

    printf("Ordem decrescente:\n");
    printf("%d--%d--%d--%d--%d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);

    return 0;
}
