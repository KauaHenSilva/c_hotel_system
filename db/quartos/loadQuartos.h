#if !defined(LOADQUARTO)
#define LOADQUARTO

#include <stdio.h>

#include "../../db/model.h"

void loadQuartos(StDbQuartos **quartos, int *quantidadeQuartos, int *idQuarto)
{
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/quartos/dbQuarto.bin", "rb");

    if (!arquivo)
    {
        printf("Arquivo Ausente!\n");
        return;
    }

    fread(idQuarto, sizeof(int), 1, arquivo);
    fread(quantidadeQuartos, sizeof(int), 1, arquivo);

    *quartos = malloc(sizeof(StDbQuartos) * (*quantidadeQuartos));

    fread(*quartos, sizeof(StDbQuartos), *quantidadeQuartos, arquivo);

    fclose(arquivo);
}

#endif // LOADQUARTO