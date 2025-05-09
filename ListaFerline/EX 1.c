#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, j = 0;
    
    printf("Digite uma string: ");
    fgets(palavra, sizeof(palavra), stdin);
    
    int tamanho = strlen(palavra);
    if (palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
        tamanho--;
    }

    
    for (i = 0; i < tamanho; i++) {
        if (palavra[i] != ' ') {
            palavra[j++] = palavra[i];
        }
    }
    
    printf( palavra);
    
    return 0;
}
