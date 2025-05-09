#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DISCIPLINAS 10
#define MAX_ALUNOS 3 

typedef struct {
    char nome[50];
    double nota;
} Disciplina;

typedef struct {
    char nome[50];
    int idade;
    char dataNascimento[15];
    char registroGeral[20];
    char numeroCpf[20];
    char nomeMae[50];
    char nomePai[50];
    char dataMatricula[15];
    char serieMatriculada[10];
    char nomeEscola[50];
    Disciplina disciplinas[MAX_DISCIPLINAS];
    int qtdDisciplinas;
} Aluno;

// Função para criptografar usando a tabela ASCII
void criptografarASCII(const char *input, char *output) {
    int i;
    for (i = 0; i < strlen(input); i++) {
        sprintf(&output[i * 3], "%03d", (unsigned char)input[i]); // Converte cada caractere para 3 dígitos ASCII
    }
    output[i * 3] = '\0'; 
}

// Função para descriptografar usando a tabela ASCII
void descriptografarASCII(const char *input, char *output) {
    int i;
    for (i = 0; i < strlen(input); i += 3) {
        char buffer[4];
        strncpy(buffer, &input[i], 3);
        buffer[3] = '\0';
        output[i / 3] = (char)atoi(buffer); // Converte de volta para caractere
    }
    output[i / 3] = '\0'; // Finaliza a string
}

void adicionarDisciplina(Aluno *aluno) {
    if (aluno->qtdDisciplinas < MAX_DISCIPLINAS) {
        Disciplina disciplina;
        printf("Qual a disciplina? ");
        scanf("%s", disciplina.nome);
        printf("Qual a nota? ");
        scanf("%lf", &disciplina.nota);
        aluno->disciplinas[aluno->qtdDisciplinas] = disciplina;
        aluno->qtdDisciplinas++;
    } else {
        printf("Número máximo de disciplinas alcançado.\n");
    }
}

double calcularMedia(Aluno aluno) {
    double soma = 0.0;
    for (int i = 0; i < aluno.qtdDisciplinas; i++) {
        soma += aluno.disciplinas[i].nota;
    }
    return soma / aluno.qtdDisciplinas;
}

const char* getStatusAluno(double media) {
    if (media >= 7.0) {
        return "APROVADO";
    } else if (media >= 5.0) {
        return "RECUPERACAO";
    } else {
        return "REPROVADO";
    }
}

void removerDisciplina(Aluno *aluno) {
    int posicao;
    printf("Qual a posição da disciplina para remover? ");
    scanf("%d", &posicao);
    if (posicao > 0 && posicao <= aluno->qtdDisciplinas) {
        for (int i = posicao - 1; i < aluno->qtdDisciplinas - 1; i++) {
            aluno->disciplinas[i] = aluno->disciplinas[i + 1];
        }
        aluno->qtdDisciplinas--;
    } else {
        printf("Posição inválida.\n");
    }
}

int main() {
    char login[20];
    char senha[20];
    char loginCriptografado[60]; // 3 dígitos por caractere + 1 para o '\0'
    char senhaCriptografada[60];
    char loginDescriptografado[20];
    char senhaDescriptografada[20];

    printf("Informe o login: ");
    scanf("%s", login);
    printf("Informe a senha: ");
    scanf("%s", senha);

    // Criptografar login e senha usando a tabela ASCII
    criptografarASCII(login, loginCriptografado);
    criptografarASCII(senha, senhaCriptografada);

    printf("Login criptografado: %s\n", loginCriptografado);
    printf("Senha criptografada: %s\n", senhaCriptografada);

    // Descriptografar login e senha para validação
    descriptografarASCII(loginCriptografado, loginDescriptografado);
    descriptografarASCII(senhaCriptografada, senhaDescriptografada);

    printf("Login descriptografado: %s\n", loginDescriptografado);
    printf("Senha descriptografada: %s\n", senhaDescriptografada);

    if (strcmp(loginDescriptografado, "Admin") == 0 && strcmp(senhaDescriptografada, "Admin") == 0) {
        Aluno alunos[MAX_ALUNOS];
        int qtdAlunos = 0;

        for (int qtd = 0; qtd < MAX_ALUNOS; qtd++) {
            Aluno aluno;
            printf("Qual o nome do aluno %d? ", qtd + 1);
            scanf("%s", aluno.nome);

            printf("Qual a idade? ");
            scanf("%d", &aluno.idade);
            printf("Qual a data de nascimento? ");
            scanf("%s", aluno.dataNascimento);
            printf("Qual o RG? ");
            scanf("%s", aluno.registroGeral);
            printf("Qual o CPF? ");
            scanf("%s", aluno.numeroCpf);
            printf("Qual o nome da mãe? ");
            scanf("%s", aluno.nomeMae);
            printf("Qual o nome do pai? ");
            scanf("%s", aluno.nomePai);
            printf("Qual a data da matrícula? ");
            scanf("%s", aluno.dataMatricula);
            printf("Qual a série matriculada? ");
            scanf("%s", aluno.serieMatriculada);
            printf("Qual o nome da escola? ");
            scanf("%s", aluno.nomeEscola);

            aluno.qtdDisciplinas = 0;
            adicionarDisciplina(&aluno);

            printf("Deseja remover alguma disciplina? (1 para sim, 0 para não) ");
            int escolha;
            scanf("%d", &escolha);
            if (escolha == 1) {
                removerDisciplina(&aluno);
            }

            alunos[qtdAlunos] = aluno;
            qtdAlunos++;
        }

        printf("------------------------Lista dos Alunos ---------------------------------\n");
        for (int i = 0; i < qtdAlunos; i++) {
            double media = calcularMedia(alunos[i]);
            printf("Nome: %s, Resultado: %s\n", alunos[i].nome, getStatusAluno(media));
        }
    } else {
        printf("Login ou senha incorretos.\n");
    }

    return 0;
}
