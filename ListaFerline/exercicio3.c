#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;
    char letra;
    float resultado;

    printf("Me informe uma letra entre A, P, H: ");
    scanf(" %c", &letra);

    printf("Me informe um número: ");
    scanf("%f", &n1);

    printf("Me informe um número: ");
    scanf("%f", &n2);

    printf("Me informe um número: ");
    scanf("%f", &n3);

    printf("Me informe um número: ");
    scanf("%f", &n4);

    if (letra == 'A')
    {
        resultado = (n1 + n2 + n3 + n4) / 4;
    }
    if (letra == 'P')
    {
        resultado = (n1 * 2 + n2 * 3 + n3 * 5 + n4 * 10) / 20;
    }
    if (letra == 'H')
    {
        resultado = 4 / (1 / n1 + 1 / n2 + 1 / n3 + 1 / n4);
    }

    printf("O resultado do cálculo é: %.2f\n", resultado);

    return 0;
}