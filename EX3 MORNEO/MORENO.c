#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//--------------------------------------------
struct veiculo
{
    char marca[50];
    char modelo[50];
    char cor[50];
    char anoModelo[50];
    char anoFabricacao[50];
    char combustivel[50];
    char placa[20];
};

//--------------------------------------------
int main()
{
    char buscaPlaca[20];
    struct veiculo oVeiculo[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe a marca do carro: ");
        fgets(oVeiculo[i].marca, 50, stdin);

        printf("Informe o modelo do carro: ");
        fgets(oVeiculo[i].modelo, 50, stdin);

        printf("Informe a cor do carro: ");
        fgets(oVeiculo[i].cor, 50, stdin);

        printf("Informe o ano do modelo: ");
        fgets(oVeiculo[i].anoModelo, 50, stdin);

        printf("Informe o ano de fabricação: ");
        fgets(oVeiculo[i].anoFabricacao, 50, stdin);

        printf("Informe o tipo de combustível: ");
        fgets(oVeiculo[i].combustivel, 50, stdin);

        printf("Informe a placa do carro: ");
        fgets(oVeiculo[i].placa, 20, stdin);
    }

    printf("Informe a placa que deseja encontrar: ");
    fgets(buscaPlaca, 20, stdin);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(oVeiculo[i].placa, buscaPlaca) == 0)
        {

            printf("Marca: \n%s", oVeiculo[i].marca);
            printf("Modelo: \n%s", oVeiculo[i].modelo);
            printf("Cor: \n%s", oVeiculo[i].cor);
            printf("Ano do Modelo: \n%s", oVeiculo[i].anoModelo);
            printf("Ano de fabricação: \n%s", oVeiculo[i].anoFabricacao);
            printf("Combustível utilizado: \n%s", oVeiculo[i].combustivel);
            printf("Placa: \n%s", oVeiculo[i].placa);
            return 0;
        }
    }

    printf("Placa não encontrada\n");

    return 0;
}
