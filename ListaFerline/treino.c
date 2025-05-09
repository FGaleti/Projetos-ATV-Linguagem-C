#include<stdio.h>
double soma( double n1 , double n2 );
double sub( double n1 , double n2 );
    



    int main(){
       
        int n1,n2,resultado,menos;
         n1=0;
         n2=0;
        printf("Primeiro numero: ");
        scanf("%d", &n1);
        printf("Segundo numero: ");
        scanf("%d", &n2);

        resultado=soma(n1,n2);
        printf("%.2d\n",resultado);
        printf("---------------------------------------------------------------------\n");
        menos=sub(n1,n2);
        printf("%.2d\n",menos);








        return 0;
    }
double soma( double n1 , double n2 ){
    return n1+n2;
}
double sub( double n1 , double n2 ){
    return n1-n2;
}
