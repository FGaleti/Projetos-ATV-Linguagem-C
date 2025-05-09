#include <stdio.h>
#include <limits.h>

int main() {
    char nomeArquivo[100];
    FILE *arquivo;
    int numero;
    int maior = INT_MIN, menor = INT_MAX;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fscanf(arquivo, "%d", &numero) != EOF) {
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }
    }
    fclose(arquivo);

    if (maior == INT_MIN && menor == INT_MAX) {
        printf("O arquivo está vazio ou não contém números válidos.\n");
    } else {
        printf("O maior número no arquivo é: %d\n", maior);
        printf("O menor número no arquivo é: %d\n", menor);
    }

    return 0;
}
