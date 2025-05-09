#include <stdio.h>
int main()
{
    float n1, n2, n3;

    printf("Me informe 3 valores ");
    scanf("%f %f %f", &n1, &n2, &n3);
    if ((n1 * n1) + (n2 * n2) == (n3 * n3) || (n3 * n3) + (n1 * n1) == (n2 * n2) || (n2 * n2) + (n3 * n3) == (n1 * n1))
    {
        printf("e um triangulo retangulo");
    }
    else
    {
        printf("nao e um triangulo retangulo");
    }
}