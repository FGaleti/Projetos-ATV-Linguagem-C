#include <stdio.h>

int main() {
    FILE *arquivo;
    int num, soma = 0;

    arquivo = fopen("numeros.txt", "r");
  

    while (fscanf(arquivo, "%d", &num) != EOF) {
        soma += num;
    }
    fclose(arquivo);

    printf("A soma dos números no arquivo é: %d\n", soma);

    return 0;
}
