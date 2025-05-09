 Aluno(float presenca,float n1, float n2,float aula){
     float Freq=(presenca/aula)*100;
    float media=(n1+n2)/2;
    if (Freq >= 60 && media >= 60)
    {
    printf("Aluno aprovado\n");
    }else{
    printf("Aluno reprovado\n");
    }
}
#include<stdio.h>
int main(){
    
    float presenca,n1,n2,aula;
    printf("Me informe a primeira nota\n");
    scanf("%f",&n1);
    printf("Me informe a primeira nota\n");
    scanf("%f",&n2);
    printf("Me informe a quantidade total de aulas\n ");
    scanf("%f",&aula);
    printf("Me informe a sua quatidade de presença\n");
    scanf("%f",&presenca);

    Aluno(presenca,n1,n2,aula);




    return 0;
}