#if !defined(ADICIONANDOIDRESERVA)
#define ADICIONANDOIDRESERVA

#include "../../../../db/model.h"


void adicionandoIdReserva(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int *idFluxo)
{
  dbFluxoFinanceiro[localfn].idReserva = ++(*idFluxo);
} 

#endif // ADICIONANDOIDRESERVA
