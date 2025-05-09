#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int adivinha, chute, tentativas = 0;

    srand(time(NULL));
     
    adivinha = rand() % 100 + 1;

    printf("Tente adivinhar o número secreto (entre 1 e 100):\n");
    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;

        if (chute < adivinha) {
            printf("O número secreto é maior.\n");
        } else if (chute > adivinha) {
            printf("O número secreto é menor.\n");
        } else {
            printf("Parabéns! Você acertou em %d tentativas!\n", tentativas);
        }
    } while (chute != adivinha);

    return 0;
}