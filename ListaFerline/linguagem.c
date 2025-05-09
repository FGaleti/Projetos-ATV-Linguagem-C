#include <stdint.h>

int main() {
    int peso,idade;
    float altura;
    printf("Digite sua idade e sua altura");
        scanf("%d%d%f",&idade,&peso,&altura);
    printf("Você tem %d anos ,%d kilos e %f m de altura",idade,peso,altura);

    return 0;
}