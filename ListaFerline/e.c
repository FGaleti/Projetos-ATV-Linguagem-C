Valor(int n1){
    if (n1 > 0)
    {
        printf("Valor Positivo");
    }else if(n1 < 0)
    {
        printf("Valor Negativo");
    }else if(n1 == 0)
    {
        printf("O valor é igual a zero");
    }
    return 0 ;
}
#include<stdio.h>
int main(){
    int n1;

    printf("Me informe o numero ");
    scanf("%d",&n1);

    printf(Valor(n1));
    
    return 0;
}
    
