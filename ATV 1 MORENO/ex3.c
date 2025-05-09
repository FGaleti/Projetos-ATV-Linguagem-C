#include <stdio.h>

int main()
{
    int n;

    do
    {
        printf("Escreva um número entre 5 e 20: ");
        scanf("%d", &n);
    } while (n < 5 || n > 20);

    printf("\nContagem simultânea:\n");
    for (int i = 0, j = n; i <= n; i++, j--)
    {
        printf("%d--------%d\n", i, j);
    }

    return 0;
}
