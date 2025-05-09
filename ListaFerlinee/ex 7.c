#include <stdio.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int num, soma = 0, cont = 0;
    float media;
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

   
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

  
    while (fscanf(arquivo, "%d", &num) == 1) {
        soma += num;
        cont++;
        caractere = fgetc(arquivo);
        if (caractere != ',' && caractere != ' ' && caractere != EOF) {
            break;
        }
    }
    fclose(arquivo);

    if (cont == 0) {
        printf("Nenhum número encontrado no arquivo.\n");
        return 1;
    }

    media = (float)soma / cont;
    printf("A média dos números no arquivo é: %.2f\n", media);

    return 0;
}
