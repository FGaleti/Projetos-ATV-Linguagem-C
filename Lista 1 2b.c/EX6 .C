#include<stdio.h>
int main(){
int alunos=0;
float media=0;
float altura=0;


    printf("informe o numero total de alunos ");
    scanf("%d",&alunos);

    for (int i = 0; i < alunos; i++)
    {
        printf("Qual a altura do aluno %d ?",i );
            scanf("%f",&altura);
        media+=altura;
    }
        printf("a media da sala é : %f",media/alunos);

    return 0;

}