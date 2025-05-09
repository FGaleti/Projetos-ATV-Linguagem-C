#include <stdio.h>

int main() {
    FILE *arquivo = fopen("arquivo.txt", "w");
    
    if (arquivo == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return 1;
    }
    

    fputs("Hello, Mundo!\n", arquivo);

    fclose(arquivo);
    
    printf("Frase escrita com sucesso no arquivo 'arquivo.txt'.\n");

    return 0;
}
