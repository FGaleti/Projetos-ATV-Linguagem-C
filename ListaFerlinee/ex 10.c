#include <stdio.h>

int main() {
    char nomeArquivoOrigem[100];
    FILE *arquivoOrigem, *arquivoCopia;
    char caractere;

    printf("Digite o nome do arquivo de origem: ");
    scanf("%s", nomeArquivoOrigem);

    arquivoOrigem = fopen(nomeArquivoOrigem, "r");
    if (arquivoOrigem == NULL) {
        printf("Erro ao abrir o arquivo de origem!\n");
        return 1;
    }
    arquivoCopia = fopen("copia.txt", "w");
    if (arquivoCopia == NULL) {
        printf("Erro ao criar o arquivo de cópia!\n");
        fclose(arquivoOrigem);
        return 1;
    }

    while ((caractere = fgetc(arquivoOrigem)) != EOF) {
        fputc(caractere, arquivoCopia);
    }

    fclose(arquivoOrigem);
    fclose(arquivoCopia);

    printf("Conteúdo copiado com sucesso para 'copia.txt'.\n");
    return 0;
}
