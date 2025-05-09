#include<stdio.h>
int main(){

    int numero,raizes;

    printf("me informe um numero: ");
    scanf("%d",&numero);

   for (int i = 2; i <= numero / 2; i++) {
        if (numero % i == 0) {
            printf("O numero nao e primo.\n");
            return 0;
        }
    }
     printf("Numero primo");
        
    return 0;
}

