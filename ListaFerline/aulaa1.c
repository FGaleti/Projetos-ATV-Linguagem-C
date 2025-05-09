#include <stdio.h>

int main()
{
    int maior, menor, valor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor);
    maior = valor;
    menor = valor;
    printf("Digite o segundo valor: ");
    scanf("%d", &valor);
    if (valor > maior)
    {
        maior = valor;
    }
    if (valor < menor)
    {
        menor = valor;
    }
    printf("O seu maior numero e: %d", maior);

    return 0;
}
