#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("meuarquivo.txt", "r");
    
    // Verificar se o arquivo foi aberto com sucesso
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Ler e exibir o conteúdo do arquivo caractere por caractere
    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);

    return 0;
}
