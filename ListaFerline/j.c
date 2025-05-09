 Soma(int n1,int n2){
    return n1+n2;
}
 Sub(int n1,int n2){
    return n1-n2;
}
 Divi(int n1,int n2){
    return n1/n2;
}
 Multi(int n1,int n2){
    return n1*n2;
}
#include<stdio.h>
#include<string.h>
int main(){

int n1,n2,resultado;
char escolha[20];

printf("Qual o primeiro numero ?\n");
scanf("%d",&n1);
printf("Qual o segundo numero ?\n");
scanf("%d",&n2);
printf("Qual operação deseja fazer ? (+,-,*,/)\n");
scanf("%s",escolha);

if (strcmp(escolha,"+")==0)
{
    resultado=Soma(n1,n2);
}else if(strcmp(escolha,"-")==0){
    resultado=Sub(n1,n2);
}else if(strcmp(escolha,"*")==0){
    resultado=Multi(n1,n2);
}else if (strcmp(escolha,"/")==0)
{
    resultado=Divi(n1,n2);
}
printf("%d",resultado);


    return 0;
}
