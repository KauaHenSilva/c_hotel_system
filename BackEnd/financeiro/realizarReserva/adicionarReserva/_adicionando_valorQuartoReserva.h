#if !defined(ADICIONANDOVALORDARESERVA)
#define ADICIONANDOVALORDARESERVA

#include "../../../../db/model.h"

void adicionandoValorQuarto(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int localQ, StDbQuartos *quarto)
{
  dbFluxoFinanceiro[localfn].valorPagar = quarto[localQ].valorDiaria;
} 

#endif // ADICIONANDOVALORDARESERVA
