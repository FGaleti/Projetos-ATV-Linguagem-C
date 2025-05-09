#include <stdio.h>

int main() {
    int qtd = 0, nota = 0;
    float media = 0;
    float v1[qtd]; 

    printf("Quantidade de notas: ");
    scanf("%d", &qtd);

    for (int i = 0; i < qtd; i++) {
        printf("Informe a nota : ");
        scanf("%d", &nota);
        v1[i] = nota; 
        media += nota; 
    }   

    media=media/qtd;

    printf("A média é : %.2f", media);

    return 0;
}