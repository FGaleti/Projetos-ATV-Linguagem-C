#include <stdio.h>

int main()
{
    float valorTotal = 0, valorDoado;  

    for (int i = 1; i <= 100 && valorTotal < 7500; i++)  
    {
        printf("Qual o valor deseja doar? ");
        scanf("%f", &valorDoado);

        valorTotal += valorDoado;
    }
    printf("Meta de doações atingida! Total arrecadado: R$ %.2f\n", valorTotal);

    return 0;
}
