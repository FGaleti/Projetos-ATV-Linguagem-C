#include<stdio.h>
int main(){

 int v1[10], v2[10];
    int numero = 0;
    int i;

    for (i = 0; i < 10; i++) {
        printf("Informe um número: ");
        scanf("%d", &numero);
        v1[i] = numero;
    }

    for (i = 0; i < 10; i++) {
        v2[i] = v1[i];
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", v2[i]);
    }
    return 0;
}

