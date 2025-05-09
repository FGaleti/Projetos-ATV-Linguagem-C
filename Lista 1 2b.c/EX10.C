#include <stdio.h>

int main() {
    int numAlunos, i;
    float nota1, nota2, Nota1 = 0;
    float Nota2 = 0;

    printf("Digite o número de alunos: ");
    scanf("%d", &numAlunos);

    for (i = 1; i <= numAlunos; i++) {
        printf("Aluno %d:\n", i);
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);

        Nota1 += nota1;  
        Nota2 += nota2;
    }

    float mediaNota1 = Nota1 / numAlunos;
    float mediaNota2 = Nota2 / numAlunos;

    printf("\nMédia da disciplina 1: %.2f\n", mediaNota1);
    printf("Média da disciplina 2: %.2f\n", mediaNota2);

    return 0;
}