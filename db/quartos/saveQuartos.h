#include <stdio.h>

void saveQuartos(StDbQuartos *quartos, int quantidadeQuartos, int idQuarto) {
    FILE *fldbQuarto = fopen("dbQuarto.bin", "wb");
    FILE *flQuantidadeQuarto = fopen("dbQuantidadeQuarto.bin", "wb");
    FILE *flIdQuarto = fopen("dbIdQuarto.bin", "wb");

    if (!fldbQuarto || !flQuantidadeQuarto || !flIdQuarto) {
        return;
    }

    fwrite(&idQuarto, sizeof(int), 1, flIdQuarto);
    fwrite(&quantidadeQuartos, sizeof(int), 1, flQuantidadeQuarto);
    fwrite(quartos, sizeof(StDbQuartos), quantidadeQuartos, fldbQuarto);

    fclose(flQuantidadeQuarto);
    fclose(fldbQuarto);
    fclose(flIdQuarto);
}
