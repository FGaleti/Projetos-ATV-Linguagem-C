#include <stdio.h>
#include <string.h>

int main() {
    int totalAlunos = 32;
    float notaMinimaAprovacao = 6.0;
    char nome[50];
    float nota1, nota2, mediaAluno, somaMedias = 0;
    int aprovados = 0, reprovados = 0;
    int i = 0;

    // Parte 1: Usando o loop for para coletar os dados dos primeiros 10 alunos
    printf("=== Usando FOR para coletar dados de 10 alunos ===\n");
    for (i = 0; i < 10; i++) {
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", nome);

        // Validação da nota 1
        do {
            printf("Informe a 1ª nota de %s (0 a 10): ", nome);
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        // Validação da nota 2
        do {
            printf("Informe a 2ª nota de %s (0 a 10): ", nome);
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        // Cálculo da média do aluno
        mediaAluno = (nota1 + nota2) / 2.0;
        somaMedias += mediaAluno;

        // Verifica aprovação ou reprovação
        if (mediaAluno >= notaMinimaAprovacao) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    // Parte 2: Usando while para coletar dados dos próximos 10 alunos
    printf("\n=== Usando WHILE para coletar dados de mais 10 alunos ===\n");
    while (i < 20) {
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", nome);

        // Validação da nota 1
        do {
            printf("Informe a 1ª nota de %s (0 a 10): ", nome);
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        // Validação da nota 2
        do {
            printf("Informe a 2ª nota de %s (0 a 10): ", nome);
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        // Cálculo da média do aluno
        mediaAluno = (nota1 + nota2) / 2.0;
        somaMedias += mediaAluno;

        // Verifica aprovação ou reprovação
        if (mediaAluno >= notaMinimaAprovacao) {
            aprovados++;
        } else {
            reprovados++;
        }

        i++;
    }

    // Parte 3: Usando do-while para coletar dados dos últimos 12 alunos
    printf("\n=== Usando DO-WHILE para coletar dados dos últimos 12 alunos ===\n");
    do {
        printf("\nInforme o nome do %dº aluno: ", i + 1);
        scanf("%s", nome);

        // Validação da nota 1
        do {
            printf("Informe a 1ª nota de %s (0 a 10): ", nome);
            scanf("%f", &nota1);
            if (nota1 < 0 || nota1 > 10) {
                printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            }
        } while (nota1 < 0 || nota1 > 10);

        // Validação da nota 2
        do {
            printf("Informe a 2ª nota de %s (0 a 10): ", nome);
            scanf("%f", &nota2);
            if (nota2 < 0 || nota2 > 10) {
                printf("Nota inválida! A nota deve estar entre 0 e 10.\n");
            }
        } while (nota2 < 0 || nota2 > 10);

        // Cálculo da média do aluno
        mediaAluno = (nota1 + nota2) / 2.0;
        somaMedias += mediaAluno;

        // Verifica aprovação ou reprovação
        if (mediaAluno >= notaMinimaAprovacao) {
            aprovados++;
        } else {
            reprovados++;
        }

        i++;
    } while (i < totalAlunos);

    float mediaTurma = somaMedias / totalAlunos;

    float percentualAprovados = (float)aprovados / totalAlunos * 100;
    float percentualReprovados = (float)reprovados / totalAlunos * 100;

    printf("\nMédia geral da turma: %.2f\n", mediaTurma);
    printf("Percentual de aprovados: %.2f%%\n", percentualAprovados);
    printf("Percentual de reprovados: %.2f%%\n", percentualReprovados);

    return 0;
}
