#include<stdio.h>
int main(){

    int v1[10]={10};
    int numero;
    int contPar=0,contImpar=0;
    for (int i = 0; i <10; i++)
    {
        printf("\nInforme os numeros : ");
        scanf("%d",&numero);
        v1[i]=numero;
        if (numero % 2 == 0)
        {
            contPar++;
        }else if (numero %2 !=0)
        {
            contImpar ++;
        }
    printf("\nImpars : %d", contImpar);
    printf("\nPares  : %d", contPar); 
    }

    return 0;
}