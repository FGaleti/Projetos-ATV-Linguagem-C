#include<stdio.h>
    int main(){
        double numero;
        int total;
        for (total  = 0; total < 5; total++)
        {
           printf("Numero : %d ",total +1);
           scanf("%lf",&numero);
        }
        printf("a media é : %f ", numero/5);




        return 0;
    }