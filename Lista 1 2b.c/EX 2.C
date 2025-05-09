#include<stdio.h>
int main(){
    int i ;
    int contador;
    contador = 0;
    i = 0;
    while (i <= 100)
    {
        contador+=i ;  
        i++;
    }    
    printf("i: %d\n", contador);
    return 0;
}