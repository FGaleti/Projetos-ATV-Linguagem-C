#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int existeNoVetor(int *v, int tamanho, int num)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (v[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

void imprime(int *v, int t)
{
    printf("\nElementos do vetor:\n");
    for (int i = 0; i < t; i++)
    {
        printf("Valor: %d | Endereço: %p\n", v[i], (void *)&v[i]);
    }
    printf("\n");
}

int main()
{
    int tam = 10;
    int *vet;
    srand(time(NULL));

    vet = (int *)malloc(tam * sizeof(int));
    if (!vet)
    {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    printf("Memória alocada no endereço: %p\n", (void *)vet);

    for (int i = 0; i < tam; i++)
    {
        int num;
        do
        {
            num = (rand() % 91) + 10;
        } while (existeNoVetor(vet, i, num));
        vet[i] = num;
    }

    imprime(vet, tam);

    tam = 15;
    vet = (int *)realloc(vet, tam * sizeof(int));
    if (!vet)
    {
        printf("Erro ao realocar memória.\n");
        return 1;
    }

    for (int i = 10; i < tam; i++)
    {
        int num;
        do
        {
            num = (rand() % 100) + 100;
        } while (existeNoVetor(vet, i, num));
        vet[i] = num;
    }

    imprime(vet, tam);

    tam = 8;
    vet = (int *)realloc(vet, tam * sizeof(int));
    if (!vet)
    {
        printf("Erro ao realocar memória.\n");
        return 1;
    }

    imprime(vet, tam);

    free(vet);
    printf("Memória liberada.\n");

    return 0;
}
