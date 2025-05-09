#include <stdio.h>
#include <stdlib.h>

int main() {
    typedef struct {
        char nome[50];
        char telefone[15];
        char email[50];
        char cpf[15];
    } Pessoa;
    
    Pessoa vetor[3];
    
    
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        gets(vetor[i].nome);
        printf("Digite o telefone: ");
        gets(vetor[i].telefone);
        printf("Digite o email: ");
        gets(vetor[i].email);
        printf("Dig'ite o CPF: ");
        gets(vetor[i].cpf);
    }
    
    
    int x, y, z;
    char w;
    float k;
    double n;
    
    int *ptrX = &x, *ptrY = &y, *ptrZ = &z;
    char *ptrW = &w;
    float *ptrK = &k;
    double *ptrN = &n;
    
    *ptrX = 10;
    *ptrY = *ptrX * 2;
    *ptrZ = (*ptrY * 10) - 20;
    
    *ptrW = vetor[1].nome[2];
    *ptrK = *ptrZ / 2.0;
    *ptrN = (*ptrX + *ptrY) * 0.325;
    
    printf("\nValores e endereços das variáveis:\n");
    printf("x = %d, endereço = %p\n", x, &x);
    printf("y = %d, endereço = %p\n", y, &y);
    printf("z = %d, endereço = %p\n", z, &z);
    printf("w = %c, endereço = %p\n", w, &w);
    printf("k = %.2f, endereço = %p\n", k, &k);
    printf("n = %.2lf, endereço = %p\n", n, &n);
    
    printf("\nValores e endereços dos ponteiros:\n");
    printf("ptrX aponta para %p e seu endereço é %p\n", ptrX, &ptrX);
    printf("ptrY aponta para %p e seu endereço é %p\n", ptrY, &ptrY);
    printf("ptrZ aponta para %p e seu endereço é %p\n", ptrZ, &ptrZ);
    printf("ptrW aponta para %p e seu endereço é %p\n", ptrW, &ptrW);
    printf("ptrK aponta para %p e seu endereço é %p\n", ptrK, &ptrK);
    printf("ptrN aponta para %p e seu endereço é %p\n", ptrN, &ptrN);
    
    printf("\nTamanhos em bytes:\n");
    printf("Tamanho de x: %lu bytes\n", sizeof(x));
    printf("Tamanho de y: %lu bytes\n", sizeof(y));
    printf("Tamanho de z: %lu bytes\n", sizeof(z));
    printf("Tamanho de w: %lu bytes\n", sizeof(w));
    printf("Tamanho de k: %lu bytes\n", sizeof(k));
    printf("Tamanho de n: %lu bytes\n", sizeof(n));
    printf("Tamanho de Pessoa: %lu bytes\n", sizeof(Pessoa));
    printf("Tamanho do ponteiro ptrX: %lu bytes\n", sizeof(ptrX));
    printf("Tamanho do ponteiro ptrY: %lu bytes\n", sizeof(ptrY));
    printf("Tamanho do ponteiro ptrZ: %lu bytes\n", sizeof(ptrZ));
    printf("Tamanho do ponteiro ptrW: %lu bytes\n", sizeof(ptrW));
    printf("Tamanho do ponteiro ptrK: %lu bytes\n", sizeof(ptrK));
    printf("Tamanho do ponteiro ptrN: %lu bytes\n", sizeof(ptrN));
    
    system("pause");
    return 0;
}
