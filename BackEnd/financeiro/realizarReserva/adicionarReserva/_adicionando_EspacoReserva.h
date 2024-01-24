#if !defined(ADICIONARESPACORESERVA)
#define ADICIONARESPACORESERVA


#include "../../../../db/model.h"

void adicionandoEspaco(StDbFluxoFinanceiro **dbFluxoFinanceiro, int *qtdReserva)
{
  if (!*dbFluxoFinanceiro)
  {
    *dbFluxoFinanceiro = (StDbFluxoFinanceiro *)malloc(sizeof(StDbFluxoFinanceiro));

    if (!dbFluxoFinanceiro)
    {
      printf("Erro ao alocar memoria");
      exit(1);
    }

    (*qtdReserva)++;
    return;
  }
  *dbFluxoFinanceiro = (StDbFluxoFinanceiro *)realloc(*dbFluxoFinanceiro, ((*qtdReserva) + 1) * sizeof(StDbFluxoFinanceiro));

  if (!dbFluxoFinanceiro)
  {
    printf("Erro ao alocar memoria");
    exit(1);
  }

  (*qtdReserva)++;
}


#endif // ADICIONARESPACORESERVA
