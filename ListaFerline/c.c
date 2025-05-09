Ano(int n1){
    if(n1 %4 ==0){
        printf("Ano é bissexto");
    }else{
        printf("Ano nao é bissexto");
    }
    return 0;
}




#include<stdio.h>
int main(){

    int n1;
    printf("Informe um numero");
    scanf("%d",&n1);

    printf(Ano(n1));

    return 0;
}