#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    double maior;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);
    maior = n1;

    printf("Digite o numero 2: ");
    scanf("%d", &n2);
    if (n2 > maior) maior = n2;

    printf("Digite o numero 3: ");
    scanf("%d", &n3);
    if (n3 > maior) maior = n3;

    printf("Digite o numero 4: ");
    scanf("%d", &n4);
    if (n4 > maior) maior = n4;

    printf("Digite o numero 5: ");
    scanf("%d", &n5);
    if (n5 > maior) maior = n5;

    printf("Digite o numero 6: ");
    scanf("%d", &n6);
    if (n6 > maior) maior = n6;

    printf("Digite o numero 7: ");
    scanf("%d", &n7);
    if (n7 > maior) maior = n7;

    printf("Digite o numero 8: ");
    scanf("%d", &n8);
    if (n8 > maior) maior = n8;

    printf("Digite o numero 9: ");
    scanf("%d", &n9);
    if (n9 > maior) maior = n9;

    printf("Digite o numero 10: ");
    scanf("%d", &n10);
    if (n10 > maior) maior = n10;

    printf("O maior numero digitado e: %.2lf\n", maior);

    return 0;
}