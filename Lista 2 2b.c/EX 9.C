#include <stdio.h>

int main() {
    int idade, contadorMulheres = 0, continuar;
    float somaIdadesMulheres = 0;
    char sexo, nome[50];

   /* for (int i = 0; i < 5; i++) { 
        printf("Informe o nome: ");
        scanf("%s", nome);
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            somaIdadesMulheres += idade;
            contadorMulheres++;
        }

        printf("Deseja continuar? 1-Sim / 0-Não ");
        scanf("%d", &continuar);
        if (continuar == 0) {
            break;
        }
    }

    if (contadorMulheres > 0) {
        printf("Média de idade das mulheres: %.2f\n", somaIdadesMulheres / contadorMulheres);
    } else {
        printf("Nenhuma mulher foi cadastrada.\n");
    }*/


   /* while (continuar != 0) {
        printf("Informe o nome: ");
        scanf("%s", nome);
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            somaIdadesMulheres += idade;
            contadorMulheres++;
        }

        printf("Deseja continuar? (1-Sim / 0-Não): ");
        scanf("%d", &continuar);
    }

    if (contadorMulheres > 0) {
        printf("Média de idade das mulheres: %.2f\n", somaIdadesMulheres / contadorMulheres);
    } else {
        printf("Nenhuma mulher foi cadastrada.\n");
    }*/


    do {
        printf("Informe o nome: ");
        scanf("%s", nome);
        printf("Informe a idade: ");
        scanf("%d", &idade);
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'F' || sexo == 'f') {
            somaIdadesMulheres += idade;
            contadorMulheres++;
        }

        printf("Deseja continuar? (1-Sim / 0-Não): ");
        scanf("%d", &continuar);
    } while (continuar != 0);

    if (contadorMulheres > 0) {
        printf("Média de idade das mulheres: %.2f\n", somaIdadesMulheres / contadorMulheres);
    } else {
        printf("Nenhuma mulher foi cadastrada.\n");
    }

    return 0;
}








