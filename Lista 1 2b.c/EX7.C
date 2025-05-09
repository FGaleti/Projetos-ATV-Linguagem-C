#include <stdio.h>

int main() {
    char opcao;
    float temperatura, resultado;

    while (1) {
        printf("Escolha a opção de conversão:\n");
        printf("C - Celsius para Fahrenheit\n");
        printf("F - Fahrenheit para Celsius\n");
        printf("S - Sair\n");
        scanf(" %c", &opcao);

        if (opcao == 'S' || opcao == 's') {
            break;
        }
        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);
        switch (opcao) {
            case 'C':
            case 'c':
                resultado = (temperatura * 9/5) + 32;
                printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", temperatura, resultado);
                break;
            case 'F':
            case 'f':
                resultado = (temperatura - 32) * 5/9;
                printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius.\n", temperatura, resultado);
                break;
            default:
                printf("Opção inválida.\n");
        }
    }
    return 0;
}