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
    int  conferencia, tamanhoSenha;

    do {

        //Visualiza qual aÃ§Ã£o o usuÃ¡rio deseja executar
        do {
            limpaEntrada();
            printf("Escolha uma ação entre:\nCriar Conta - C\nEntrar - E\nSair - S\n");
            scanf("%c", &acao);
        } while ((toupper(acao) != 'C') && (toupper(acao) != 'E') && (toupper(acao) != 'S'));

        if (toupper(acao) == 'C') {

            // Pede o email e confere se jÃ¡ estÃ¡ presente no BD
            limpaEntrada();
            printf("Digite o seu email: ");
            scanf("%s", email);
            /* if (email == algum no BD) {
                printf("O email digitado jÃ¡ estÃ¡ cadastrado no sistema!\n")
                break;
            } */
            
            // Pede para o usuÃ¡rio criar a senha duas vezes para conferÃªncia
            limpaEntrada();
            printf("Digite a sua senha: ");
            scanf("%s", senha);

            limpaEntrada();
            printf("Digite a sua senha novamente: ");
            scanf("%s", senhaConf);
            conferencia = strcmp(senha, senhaConf);
            if (conferencia != 0) {
                printf("Senha digitada incorretamente!\n");
                break;
            } else {

            int tamanhoSenha = sizeof(senha) / sizeof(senha[0]);    
            //Faz a criptografia da senha
            for (int i = 0; i < tamanhoSenha; i++){
                senhaCript[i] = senha[i];
            }

            printf("Senha criptografada = %d", senha);
            printf("Cadastro criado com sucesso!!!\nDigite 'E' se deseja acessar sua conta. ");

            }
        }

        if (toupper(acao) == 'E') {
            



        }



    } while (toupper(acao) != 'S');


    return 0;
}

void limpaEntrada() {
    char c;
while ((c = getchar()) != '\n' && c != EOF) {} }
