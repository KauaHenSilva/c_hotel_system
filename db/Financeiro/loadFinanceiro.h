#include <stdio.h>

#include "../../db/model.h"

void loadFinanceiro(StDbFluxoFinanceiro **Financeiro, int *quantidadeFinanceiro, int *idFinanceiro) {
    FILE *arquivo = fopen("C:/Meus-Estudos-Global/Desktop/C/C_Hotel_System/db/Financeiro/dbFinanceiro.bin", "rb");

    if (!arquivo) {
        printf("Arquivo Ausente!\n");
        return;
    }

    fread(idFinanceiro, sizeof(int), 1, arquivo);
    fread(quantidadeFinanceiro, sizeof(int), 1, arquivo);

    *Financeiro = malloc(sizeof(StDbFluxoFinanceiro) * (*quantidadeFinanceiro));

    fread(*Financeiro, sizeof(StDbFluxoFinanceiro), *quantidadeFinanceiro, arquivo);

    fclose(arquivo);
}