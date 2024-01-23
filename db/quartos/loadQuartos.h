#include <stdio.h>

#include "../../db/model.h"

void lerQuartos(StDbQuartos **quartos, int *quantidadeQuartos) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/quartos/dbQuarto.bin", "rb");

    if (!arquivo) {
        printf("Erro ao abrir o arquivo\n");
        return;
    }

    fread(quantidadeQuartos, sizeof(int), 1, arquivo);


    *quartos = malloc(sizeof(StDbQuartos) * (*quantidadeQuartos));

    fread(*quartos, sizeof(StDbQuartos), *quantidadeQuartos, arquivo);

    fclose(arquivo);
}
