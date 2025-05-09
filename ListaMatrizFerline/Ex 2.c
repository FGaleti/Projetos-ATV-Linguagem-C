#include <stdio.h>

int main() {
    char nomes[10][50];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o nome e sobrenome da pessoa %d: ", i + 1);
        fgets(nomes[i], 50, stdin);
    }

    printf("\nLista de nomes:\n");
    for (i = 0; i < 10; i++) {
        printf("%s", nomes[i]);
    }

    return 0;
}
