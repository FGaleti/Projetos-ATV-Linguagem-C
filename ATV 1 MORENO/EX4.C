#include <stdio.h>

int main() {
    int N;

    
    do {
        printf("Digite um número inteiro entre 10 e 50: ");
        scanf("%d", &N);
    } while (N < 10 || N > 50);

    printf("Valores de i e j:");
    for (int i = 1, j = 5; i <= N && j <= 2 * N; i++, j += 5) {
        printf("i = %d, j = %d\n", i, j);
    }

    printf("Tamanho das variáveis em bytes:\n");
    printf("int N: %lu bytes\n", sizeof(N));
    printf("int i: %lu bytes\n", sizeof(int));
    printf("int j: %lu bytes\n", sizeof(int));

    return 0;
}
