#include <stdio.h>
int main()
{
    float n1, n2;
    char op;
    printf("Me informe a operaçao");
    scanf("%c", &op);
    printf("Digite dois numeros");
    scanf("%f%f", &n1, &n2);
    switch (op)
    {
    case '+':
        printf(" %2.f+%2.f = %2.f", n1, n2, n1 + n2);
        break;
    case '-':
        printf(" %2.f+%2.f = %2.f", n1, n2, n1 - n2);
        break;
    case '*':
        printf(" %2.f+%2.f = %2.f", n1, n2, n1 * n2);
        break;
    }

    return 0;
}