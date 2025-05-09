#include<stdio.h>
int ParImpar(int numero){
    if(numero % 2 == 0 ){
        return 1;
    
    }else{
        return 0;
    }
}

    int main(){
        int valor;
        printf("Informe o numero ");
            scanf("%d",&valor);
    if(ParImpar(valor)) printf("É par");
    else printf("É impar");




        return 0;
    }