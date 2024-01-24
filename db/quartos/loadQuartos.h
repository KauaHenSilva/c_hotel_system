#include <stdio.h>

#include "../../db/model.h"

void loadQuartos(StDbQuartos **quartos, int *quantidadeQuartos, int *idQuarto) {
    FILE *flQuantidadeDeQuartos = fopen("dbQuantidadeDeQuarto.bin", "rb");
    FILE *fldbQuarto = fopen("dbQuarto.bin", "rb");
    FILE *flIdQuarto = fopen("dbIdQuarto.bin", "rb");

    if (!fldbQuarto ||flQuantidadeDeQuartos || flIdQuarto) {
        return;
    }

    fread(quantidadeQuartos, sizeof(int), 1, flQuantidadeDeQuartos);
    *quartos = malloc(sizeof(StDbQuartos) * (*quantidadeQuartos));

    fread(*quartos, sizeof(StDbQuartos), *quantidadeQuartos, fldbQuarto);

    fread(idQuarto, sizeof(int), 1, flIdQuarto);

    fclose(flQuantidadeDeQuartos);
    fclose(fldbQuarto);
    fclose(flIdQuarto);
}
