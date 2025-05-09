#include <stdio.h>
#include <math.h>

// Declaração das funções
double soma(double n1, double n2);
double sub(double n1, double n2);
double divi(double n1, double n2);
double mult(double n1, double n2);
double media(double n1, double n2);
void equacao(double a, double b, double c);

int main() {
    double n1, n2, resultado;
    char op;

    printf("Escolha a operacao:\n+ para adicao\n- para subtracao\n/ para divisao\n* para multiplicacao\nm para media\ne para equacao quadratica\n");
    scanf(" %c", &op);

    if (op == 'e') {
        // Solicitando os coeficientes da equação quadrática
        double a, b, c;
        printf("Digite o coeficiente a: ");
        scanf("%lf", &a);
        printf("Digite o coeficiente b: ");
        scanf("%lf", &b);
        printf("Digite o coeficiente c: ");
        scanf("%lf", &c);

        // Calculando e exibindo as raízes da equação
        equacao(a, b, c);
    } else {
        // Solicitando os números ao usuário
        printf("Primeiro numero: ");
        scanf("%lf", &n1);
        printf("Segundo numero: ");
        scanf("%lf", &n2);

        // Executando a operação escolhida
        if (op == '+') {
            resultado = soma(n1, n2);
        } else if (op == '-') {
            resultado = sub(n1, n2);
        } else if (op == '/') {
            resultado = divi(n1, n2);
        } else if (op == '*') {
            resultado = mult(n1, n2);
        } else if (op == 'm') {
            resultado = media(n1, n2);
        } else {
            printf("Operacao invalida!\n");
            return 1;
        }

        // Exibindo o resultado
        printf("Resultado: %.2lf\n", resultado);
    }

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

double media(double n1, double n2) {
    return divi(soma(n1, n2), 2);
}

// Função para calcular as raízes da equação quadrática
void equacao(double a, double b, double c) {
    double delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Delta negativo. A equacao nao possui raizes reais.\n");
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes da equacao sao: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    }
}