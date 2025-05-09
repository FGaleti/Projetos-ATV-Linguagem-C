#include<stdio.h>
int main(){

int numero =0;
float MediaImp =0;
int contador =0;

  /*  for (int i = 0; i < 10; i++)
    {
        printf("informe um numero");
        scanf("%d", &numero);
        if (numero%2 !=0)
        {            
            MediaImp+=numero;
            contador++;
        }
    }
    printf("%2.f", MediaImp/contador);*/
printf("---------------------------------------------------------------------------------------");
   /* int i = 0;

    while (i < 10) {
        printf("Informe um numero: ");
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            MediaImp += numero;
            contador++;
        }

        i++;
    }
     printf("%2.f", MediaImp/contador);*/
printf("---------------------------------------------------------------------------------------");

    int i=0;

     do {
        printf("Informe um numero: ");
        scanf("%d", &numero);

        if (numero % 2 != 0) {
            MediaImp += numero;
            contador++;
        }
        i++;
    } while (i < 10);

    printf("%2.f", MediaImp/contador);
    return 0;

}



