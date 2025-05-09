#include<stdio.h>
int main(){
int qtd;
int numero;
float media;
    media=0;
    qtd=0;
    do
    {
        printf("informe um número");
        scanf(" %d ",&numero ) ;
        
        media+=numero;
         qtd++;
    } while (qtd<5);

    printf("média %2.f", media/5);

    return 0;
}