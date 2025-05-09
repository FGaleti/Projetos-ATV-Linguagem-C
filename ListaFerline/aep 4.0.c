#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void limpaEntrada();
void criptografarASCII(const char *input, char *output);
void descriptografarASCII(const char *input, char *output);
void arquivo(int tp);
void listarContas();

int totuser = 0;
char emailArmazenado[15][50];
char senhaArmazenada[15][150];

int main() {
    // Carregar dados do arquivo
    arquivo(0);

    char acao;
    char email[50], senha[50], senhaConf[50], senhaCript[150], senhaDescript[50];
    int conferencia;

    do {
        printf("\nEscolha uma ação:\n");
        printf("C - Criar Conta\n");
        printf("E - Entrar\n");
        printf("A - Atualizar Senha\n");
        printf("D - Deletar Conta\n");
        printf("L - Listar Contas\n");
        printf("S - Sair\n");
        printf("Digite sua escolha: ");
        scanf(" %c", &acao);

        switch (toupper(acao)) {
            case 'C': {
                // Criação de Conta
                printf("Digite o seu email: ");
                scanf("%s", email);

                int existe = 0;
                for (int i = 0; i < totuser; i++) {
                    if (strcmp(email, emailArmazenado[i]) == 0) {
                        printf("O email digitado já está cadastrado!\n");
                        existe = 1;
                        break;
                    }
                }
                if (existe) continue;

                printf("Digite a sua senha: ");
                scanf("%s", senha);
                printf("Digite a sua senha novamente: ");
                scanf("%s", senhaConf);

                conferencia = strcmp(senha, senhaConf);
                if (conferencia != 0) {
                    printf("Senhas não conferem!\n");
                    continue;
                }

                criptografarASCII(senha, senhaCript);
                strcpy(emailArmazenado[totuser], email);
                strcpy(senhaArmazenada[totuser], senhaCript);
                totuser++;
                arquivo(1);
                printf("Conta criada com sucesso!\n");
                break;
            }
            case 'E': {
                // Login
                printf("Digite o seu email: ");
                scanf("%s", email);
                printf("Digite a sua senha: ");
                scanf("%s", senha);
                criptografarASCII(senha, senhaCript);

                int loginSucesso = 0;
                for (int i = 0; i < totuser; i++) {
                    if (strcmp(email, emailArmazenado[i]) == 0 && strcmp(senhaCript, senhaArmazenada[i]) == 0) {
                        loginSucesso = 1;
                        descriptografarASCII(senhaArmazenada[i], senhaDescript);
                        printf("Login realizado com sucesso!\n");
                        break;
                    }
                }
                if (!loginSucesso) printf("Email ou senha incorretos.\n");
                break;
            }
            case 'A': {
                // Atualização de Senha
                printf("Digite o seu email para atualizar a senha: ");
                scanf("%s", email);
                printf("Digite a sua senha atual: ");
                scanf("%s", senha);
                criptografarASCII(senha, senhaCript);

                int encontrado = 0;
                for (int i = 0; i < totuser; i++) {
                    if (strcmp(email, emailArmazenado[i]) == 0 && strcmp(senhaCript, senhaArmazenada[i]) == 0) {
                        printf("Digite a nova senha: ");
                        scanf("%s", senha);
                        criptografarASCII(senha, senhaArmazenada[i]);
                        arquivo(1);
                        printf("Senha atualizada com sucesso!\n");
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) printf("Email ou senha incorreta.\n");
                break;
            }
            case 'D': {
                // Exclusão de Conta
                printf("Digite o seu email para excluir a conta: ");
                scanf("%s", email);
                printf("Digite a sua senha: ");
                scanf("%s", senha);
                criptografarASCII(senha, senhaCript);

                int indice = -1;
                for (int i = 0; i < totuser; i++) {
                    if (strcmp(email, emailArmazenado[i]) == 0 && strcmp(senhaCript, senhaArmazenada[i]) == 0) {
                        indice = i;
                        break;
                    }
                }
                if (indice == -1) {
                    printf("Conta não encontrada ou senha incorreta.\n");
                } else {
                    for (int i = indice; i < totuser - 1; i++) {
                        strcpy(emailArmazenado[i], emailArmazenado[i + 1]);
                        strcpy(senhaArmazenada[i], senhaArmazenada[i + 1]);
                    }
                    totuser--;
                    arquivo(1);
                    printf("Conta excluída com sucesso!\n");
                }
                break;
            }
            case 'L': {
                listarContas();
                break;
            }
            case 'S': {
                printf("Programa encerrado.\n");
                break;
            }
            default:
                printf("Opção inválida.\n");
        }

    } while (toupper(acao) != 'S');

    return 0;
}

void listarContas() {
    char opcao;
    do {
        printf("\nLista de Contas Criadas:\n");
        for (int i = 0; i < totuser; i++) {
            char senhaDescript[50];
            descriptografarASCII(senhaArmazenada[i], senhaDescript);

            printf("Conta %d:\n", i + 1);
            printf("  Email: %s\n", emailArmazenado[i]);
            printf("  Senha (Descriptografada): %s\n", senhaDescript);

            printf("  Deseja ver a senha criptografada? (S/N): ");
            scanf(" %c", &opcao);

            if (toupper(opcao) == 'S') {
                printf("  Senha (Criptografada): %s\n", senhaArmazenada[i]);
            }
            printf("\n");
        }

        printf("Deseja voltar à tela inicial? (S/N): ");
        scanf(" %c", &opcao);

    } while (toupper(opcao) != 'S');
}

void limpaEntrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void criptografarASCII(const char *input, char *output) {
    int i;
    for (i = 0; i < strlen(input); i++) {
        sprintf(&output[i * 3], "%03d", (unsigned char)input[i]);
    }
    output[i * 3] = '\0';
}

void descriptografarASCII(const char *input, char *output) {
    int i;
    for (i = 0; i < strlen(input); i += 3) {
        char buffer[4];
        strncpy(buffer, &input[i], 3);
        buffer[3] = '\0';
        output[i / 3] = (char)atoi(buffer);
    }
    output[i / 3] = '\0';
}

void arquivo(int tp) { // 0 - leitura / 1 - gravação
    char linha[150], tmp[150];
    int x;
    FILE *file;
    
    if (tp == 0) {
        file = fopen("emailesenha.txt", "r");
        if (file != NULL) {
            totuser = 0;
            x = 0;
            while (fgets(linha, sizeof(linha), file) != NULL && strlen(linha) > 0) {
                linha[strlen(linha) - 1] = '\0'; // Remove o '\n' final
                if (x % 2 == 0) {
                    strcpy(emailArmazenado[totuser], linha);
                } else {
                    strcpy(senhaArmazenada[totuser], linha);
                    totuser++;
                }
                x++;
            }
            fclose(file);
        }
    } else {
        file = fopen("emailesenha.txt", "w");
        if (file != NULL) {
            for (x = 0; x < totuser; x++) {
                fprintf(file, "%s\n", emailArmazenado[x]);
                fprintf(file, "%s\n", senhaArmazenada[x]);
            }
            fclose(file);
        }
    }
}




