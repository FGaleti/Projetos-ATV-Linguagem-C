ParImpar(int n1){
   return n1%2==0;

}
Mult(int n2){
    return n2*10>1000;
}
#include<stdio.h>
int main(){
    int n1,n2;
    printf("me informe um numero");
    scanf("%d",&n1);

    printf("me informe um numero");
    scanf("%d",&n2);

    if (ParImpar(n1))
    {
        printf("numero par\n");
    }else{
        printf("numero impar\n");
    }

    if (Mult(n2))
    {
        printf("Seu numero é maior que 1000\n");
    }else{
        printf("Seu numero é menor que 1000\n");
    }
    

    




    return 0;
}