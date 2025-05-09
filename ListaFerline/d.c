CNH(int n1){
    if (n1>=18)
    {
        printf("Pode tirar cnh\n");
    }else{
        printf("Nao pode tirar cnh\n");
}
    return 0;
}
#include<stdio.h>
int main(){
    int n1;
    char nome[50];
    printf("Me informe sua idade");
    scanf("%d",&n1);
    printf("Me informe seu nome");
    scanf("%s",nome);

    printf("o senhor/a %s",nome,CNH(n1));




    return 0;
}