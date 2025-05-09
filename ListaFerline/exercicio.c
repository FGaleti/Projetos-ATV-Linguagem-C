    int SomaDigitos(int valor){
        int soma=0;
            soma += valor /1000;
            valor+=valor %1000;
            soma += valor /100;
            valor+=valor %100;
            soma += valor /10;
            valor+=valor %10;
            soma += valor /1;
            valor+=valor %1;

            return soma;

    if(soma % 4 == 0 ){
        printf("Sim");
    
    }else{
         printf("Não");
    }
}




#include<stdio.h>



int main(){
    
}