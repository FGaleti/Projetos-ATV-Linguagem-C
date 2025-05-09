#include <stdio.h>

double encontrarMaior(int n1, int n2, int n3, int n4, int n5, int n6, int n7, int n8, int n9, int n10) {
    double maior = n1;
    
    if (n2 > maior) maior = n2;
    if (n3 > maior) maior = n3;
    if (n4 > maior) maior = n4;
    if (n5 > maior) maior = n5;
    if (n6 > maior) maior = n6;
    if (n7 > maior) maior = n7;
    if (n8 > maior) maior = n8;
    if (n9 > maior) maior = n9;
    if (n10 > maior) maior = n10;
    
    return maior;
}

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

    printf("Digite o numero 1: ");
    scanf("%d", &n1);

    printf("Digite o numero 2: ");
    scanf("%d", &n2);

    printf("Digite o numero 3: ");
    scanf("%d", &n3);

    printf("Digite o numero 4: ");
    scanf("%d", &n4);

    printf("Digite o numero 5: ");
    scanf("%d", &n5);

    printf("Digite o numero 6: ");
    scanf("%d", &n6);

    printf("Digite o numero 7: ");
    scanf("%d", &n7);

    printf("Digite o numero 8: ");
    scanf("%d", &n8);

    printf("Digite o numero 9: ");
    scanf("%d", &n9);

    printf("Digite o numero 10: ");
    scanf("%d", &n10);

    double maior = encontrarMaior(n1, n2, n3, n4, n5, n6, n7, n8, n9, n10);

    printf("O maior numero digitado e: %.2lf\n", maior);

    return 0;
}