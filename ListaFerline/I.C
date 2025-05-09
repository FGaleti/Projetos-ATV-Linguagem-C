int Triangulo(int a, int b, int c){
    if(a==c&&a==b){
        printf("Equilatero") ;
    }else if (a==b || a==c ||c==b)
    {
        printf("Isoceles") ;
    }else 
    {
        printf("Escaleno") ;
    }
}
#include<stdio.h>
int main(){

int a,b,c;
printf("mee informe o primeiro lado ");
scanf("%d",&a);
printf("mee informe o primeiro lado ");
scanf("%d",&b);
printf("mee informe o primeiro lado ");
scanf("%d",&c);

Triangulo(a,b,c);



    return 0;
}