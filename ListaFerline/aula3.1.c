#include<stdio.h>
void Divisor(int numero,int divisao){
    if(numero % divisao == 0 ){
        printf("É divisivel");
    
    }else{
         printf("Não é divisivel");
    }
}

    int main(){
        int valor, num;
            printf("Me informe dois valores");
                scanf("%d%d",&valor,&num);
            Divisor(valor,num);
        return 0;
    }