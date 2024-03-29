#if !defined(SAVEQUARTO)
#define SAVEQUARTO


#include <stdio.h>

void saveQuartos(StDbQuartos *quartos, int quantidadeQuartos, int idQuarto) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/quartos/dbQuarto.bin", "wb");

    if (!arquivo) {
        printf("Arquivo Ausente!\n");
        return;
    }

    fwrite(&idQuarto, sizeof(int), 1, arquivo);
    fwrite(&quantidadeQuartos, sizeof(int), 1, arquivo);
    fwrite(quartos, sizeof(StDbQuartos), quantidadeQuartos, arquivo);

    fclose(arquivo);
}

#endif // SAVEQUARTO

