#include <stdio.h>
#include <ctype.h>
#include <string.h>

void limpaEntrada();

int main() {
    char continua;
    char acao;
    char email[50];
    char senha[50];
    char senhaConf[50];
    char senhaCript[50];
    int conferencia, tamanhoSenha;
    char emailArmazenado[50];
    char senhaArmazenada[50];
    int contaCriada = 0; // Flag para verificar se a conta foi criada

    do {

        // Visualiza qual ação o usuário deseja executar
        do {
            limpaEntrada();
            printf("Escolha uma ação entre:\nCriar Conta - C\nEntrar - E\nSair - S\n");
            scanf("%c", &acao);
        } while ((toupper(acao) != 'C') && (toupper(acao) != 'E') && (toupper(acao) != 'S'));

        if (toupper(acao) == 'C') {

            // Pede o email e confere se já está presente no "BD"
            limpaEntrada();
            printf("Digite o seu email: ");
            scanf("%s", email);
            if (contaCriada && strcmp(email, emailArmazenado) == 0) {
                printf("O email digitado já está cadastrado no sistema!\n");
                continue; // volta ao início do loop
            }
            
            // Pede para o usuário criar a senha duas vezes para conferência
            limpaEntrada();
            printf("Digite a sua senha: ");
            scanf("%s", senha);

            limpaEntrada();
            printf("Digite a sua senha novamente: ");
            scanf("%s", senhaConf);
            conferencia = strcmp(senha, senhaConf);
            if (conferencia != 0) {
                printf("Senha digitada incorretamente!\n");
                continue;
            } else {

                tamanhoSenha = strlen(senha); // Calcula o tamanho da senha    
                // Faz a criptografia da senha (neste exemplo, apenas uma cópia simples)
                for (int i = 0; i < tamanhoSenha; i++) {
                    senhaCript[i] = senha[i] + 1; // Simples criptografia de deslocamento
                }
                senhaCript[tamanhoSenha] = '\0'; // Adiciona o caractere nulo ao final

                strcpy(emailArmazenado, email);
                strcpy(senhaArmazenada, senhaCript);
                contaCriada = 1;

                printf("Cadastro criado com sucesso!!!\n");
                printf("Senha criptografada = %s\n", senhaCript);
                printf("Digite 'E' se deseja acessar sua conta.\n");
            }
        }

        if (toupper(acao) == 'E') {
            if (!contaCriada) {
                printf("Nenhuma conta foi criada ainda. Crie uma conta primeiro.\n");
                continue;
            }

            limpaEntrada();
            printf("Digite o seu email: ");
            scanf("%s", email);
            limpaEntrada();
            printf("Digite a sua senha: ");
            scanf("%s", senha);

            tamanhoSenha = strlen(senha);
            for (int i = 0; i < tamanhoSenha; i++) {
                senhaCript[i] = senha[i] + 1;
            }
            senhaCript[tamanhoSenha] = '\0';

            if (strcmp(email, emailArmazenado) == 0 && strcmp(senhaCript, senhaArmazenada) == 0) {
                printf("Login realizado com sucesso!\n");
            } else {
                printf("Email ou senha incorretos.\n");
            }
        }

    } while (toupper(acao) != 'S');

    printf("Programa encerrado.\n");

    return 0;
}

void limpaEntrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
