#include<stdio.h>
int main(){
    
float numeros[10]={0};
int numero,soma=0;
int maior=0,menor=9999;

for (int i = 0; i < 10; i++)
{
    printf("Informe um número: ");
    scanf("%d", &numero);
    numeros[i]+=numero;
    soma+=numero;
    if (numero>maior)
    {
        maior=numero;
    }else if (numero<menor)
    {
        menor=numero;
    }
}

printf("\nA média é : %d", soma/10);
printf("\nA soma é : %d", soma);
printf("\nO maior é : %d",maior);
printf("\nO menor é : %d",menor);
  












return 0 ;
}