#include <stdio.h>

// Declaração das funções
double soma(double n1, double n2);
double sub(double n3, double n4);
double divi(double n5, double n6);
double mult(double n7, double n8);
double media(double n9, double n10);

int main() {
    double n1,n2, n9, n10, resultado;
    char op;

    printf("Escolha a operacao:\n+ para adicao\n- para subtracao\n/ para divisao\n* para multiplicacao\nm para media\n");
    scanf(" %c", &op);

    // Solicitando os números ao usuário
    if (op == 'm') {
        printf("Primeiro numero para media: ");
        scanf("%lf", &n9);
        printf("Segundo numero para media: ");
        scanf("%lf", &n10);
        resultado = media(n9, n10);
    }else {
        printf("Primeiro numero: ");
        scanf("%lf", &n1);
        printf("Segundo numero: ");
        scanf("%lf", &n2);

         if (op == '+') {
            resultado = soma(n1, n2);
        } else if (op == '-') {
            resultado = sub(n1, n2);
        } else if (op == '/') {
            resultado = divi(n1, n2);
        } else if (op == '*') {
            resultado = mult(n1, n2);
        } else {
            printf("Operacao invalida!\n");
            return 1;
        }
    }

    // Exibindo o resultado
    printf("Resultado: %.2lf\n", resultado);

    return 0;
}

// Definição das funções
double soma(double n1, double n2) {
    return n1 + n2;
}

double sub(double n1, double n2) {
    return n1 - n2;
}

double divi(double n1, double n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
        printf("Erro: Divisao por zero!\n");
        return 0;
    }
}

double mult(double n1, double n2) {
    return n1 * n2;
}

double media(double n9, double n10) {
    return (n9 + n10) / 2;
}
