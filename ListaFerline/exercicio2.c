#include <stdio.h>
int main()
{
    int n1;
    printf("Me informe um numero : ");
    scanf("%d", &n1);
    if (n1 / 2 == 0)
    {
        printf("o seu numero e par");
    }
    else
    {
        printf("o seu numero e impar");
    }
    return 0;
}