#if !defined(SAVEFINANCEIRO)
#define SAVEFINANCEIRO



#endif // SAVEFINANCEIRO


void saveFinanceiro(StDbFluxoFinanceiro *Financeiro, int quantidadeFinanceiro, int idFinanceiro) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/Financeiro/dbFinanceiro.bin", "wb");

    if (!arquivo) {
        printf("Arquivo Ausente!\n");
        return;
    }

    fwrite(&idFinanceiro, sizeof(int), 1, arquivo);
    fwrite(&quantidadeFinanceiro, sizeof(int), 1, arquivo);
    fwrite(Financeiro, sizeof(StDbFluxoFinanceiro), quantidadeFinanceiro, arquivo);

    fclose(arquivo);
}

#include <stdio.h>