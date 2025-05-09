#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_PALAVRA 100

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char nomeArquivo[100], palavraProcurada[MAX_PALAVRA], palavraLida[MAX_PALAVRA];
    FILE *arquivo;
    int contagem = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);


    printf("Digite a palavra a ser contada: ");
    scanf("%s", palavraProcurada);

    toLowerCase(palavraProcurada);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    
    while (fscanf(arquivo, "%s", palavraLida) != EOF) {
      
        toLowerCase(palavraLida);

     
        if (strcmp(palavraLida, palavraProcurada) == 0) {
            contagem++;
        }
    }
    fclose(arquivo);

    printf("A palavra '%s' aparece %d vez(es) no arquivo '%s'.\n", palavraProcurada, contagem);

    return 0;
}
