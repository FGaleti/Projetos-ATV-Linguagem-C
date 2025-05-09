#include<stdio.h>
    int main(){

        int dia,mes,ano,totalDias,anoDois,mesDois ;
        mesDois = 0;
        totalDias = 0;
        anoDois = 0;
        printf("Qual o dia ? ");
        scanf("%d",&dia);
        printf("Qual o mes ? ");
        scanf("%d",&mes);
        printf("Qual o ano ? ");
        scanf("%d",&ano);

    if (ano >= 1900 ){
        printf("O ano deve ser maior ou igual a 1900");
        
    }
    if (mes < 1 || mes > 12 || dia < 1 ) {
        printf("Data inválida!\n");
    }

     switch (mes) {
        case 12: mesDois += 31;
        case 11: mesDois += 30;
        case 10: mesDois += 31; 
        case 9:  mesDois += 30; 
        case 8:  mesDois += 31; 
        case 7:  mesDois += 31; 
        case 6:  mesDois += 30; 
        case 5:  mesDois += 31; 
        case 4:  mesDois += 30; 
        case 3:  mesDois += 31; 
        case 2:  mesDois += 28;
        case 1:  mesDois += 31;

    }
    totalDias=(ano-1900);
    anoDois=(totalDias*365);
    anoDois=anoDois+mesDois;    
    anoDois=anoDois+(dia-1);
     printf("Total de dias entre %d/%d/%d e 1/1/1900 : %d dias\n", dia, mes, ano, anoDois);


        return 0;
    }