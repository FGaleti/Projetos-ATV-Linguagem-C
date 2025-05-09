#include <stdio.h>
#include <ctype.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    char caractere;
    int contPalavras = 0;
    int dentroPalavra = 0;


    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }


    while ((caractere = fgetc(arquivo)) != EOF) {
        if (isspace(caractere)) {
            dentroPalavra = 0; 
        } else if (dentroPalavra == 0) {
            dentroPalavra = 1; 
            contPalavras++;
        }
    }

    fclose(arquivo);

    printf("O arquivo '%s' possui %d palavras.\n", nomeArquivo, contPalavras);

    return 0;
}
