Maior(int n1,int n2,int n3){
    if (n1>n2 && n1>n3)
    {
        printf("O primeiro numero é o maior");
    }else if(n2>n1 && n2 > n3){
        printf(" O segundo numero é o maior");
    }else if(n3>n1 && n3>n2){
        printf("O terceiro numero é o maior");
    }else{
        printf("Os valores sao iguais");
    }
    return 0;
}
#include<stdio.h>
int main(){

    int n1=0,n2=0,n3=0;
    printf("Me informe o primeiro numero ");
    scanf("%d",&n1);
    printf("Me informe o segundo numero ");
    scanf("%d",&n2);
    printf("Me informe o terceiro numero ");
    scanf("%d",&n3);


    printf(Maior(n1,n2,n3));

    return 0;
}