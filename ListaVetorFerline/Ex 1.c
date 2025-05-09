#include<stdio.h>
int main(){

int numeros[15]={0};
int numero;

for (int i = 0; i < 15; i++)
{
    printf("informe um numero: ");
    scanf("%d", &numero);
    numeros[i]+=numero;
}

for (int i = 14; i >=0; i--)
{
   printf("%d \n",numeros[i]);
}
    return 0;
}