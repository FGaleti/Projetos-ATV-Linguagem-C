#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("meuarquivo.txt", "r");

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere);
    }

    fclose(arquivo);

    return 0;
}


