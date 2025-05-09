#include <stdio.h>

int main() {
    FILE *arquivo;
    int num, soma = 0;

    arquivo = fopen("numeros.txt", "w");
 
    for (num = 1; num <= 10; num++) {
        fprintf(arquivo, "%d\n", num);
    }
    fclose(arquivo);

    arquivo = fopen("numeros.txt", "r");
  
    while (fscanf(arquivo, "%d", &num) != EOF) {
        soma += num * 3;
    }
    fclose(arquivo);

    printf("A soma dos números multiplicados por 3 é: %d\n", soma);

    return 0;
}
