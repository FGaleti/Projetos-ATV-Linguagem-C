#include <stdio.h>
#include<stdbool.h>//true or false
int main()
{
    int n1, n2;
    printf("Informe dois números");
    scanf("%d %d", &n1, &n2);

    printf("O resultado da divisão desses dois numeros é igual a %d", n1 / n2);
    if (n1 % 3 == 0 && n1 % 7 == 0)
    {
        printf(" sou um genio");
    }
    else
    {
        printf(" fui muleke");
    }

    return 0;
}