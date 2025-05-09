float Aumento(float salario,int idade,char profissao[20]){

    if (idade<=35 && strcmp(profissao,"A")==0)
    {
        salario=(salario/100)*112;
    }else if (idade>35&&idade<=50 && strcmp(profissao,"B")==0)
    {
        salario=(salario/100)*114,5;
    }else if (idade>50 && strcmp(profissao,"C")==0)
    {
        salario=(salario/100)*117;
    }else{
        salario=salario;
    }
    return salario;
}
#include<stdio.h>
#include<string.h>
int main(){
int idade;
float salario,SalarioAumento;
char nome[50],profissao[20];

    printf("Me informe seu nome :\n");
    scanf("%s",nome);
    printf("Qual sua idade ?\n");
    scanf("%d",&idade);
    printf("Qual seu salario ?\n");
    scanf("%f",&salario);
    printf("Qual sua profissao ?\n");
    scanf("%s",profissao);

    SalarioAumento=Aumento(salario, idade, profissao);

    printf("O salario final do senhor/a %s ficará em %.2f\n", nome, SalarioAumento);



    return 0;
}