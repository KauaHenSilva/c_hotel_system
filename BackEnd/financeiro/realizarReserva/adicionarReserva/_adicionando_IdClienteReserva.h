#if !defined(ADICIONANDOIDCLIENTE)
#define ADICIONANDOIDCLIENTE

#include "../../../../db/model.h"


void adicionandoIdCliente(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int idCliente)
{
  dbFluxoFinanceiro[localfn].idCliente = idCliente;
} 

#endif // ADICIONANDOIDCLIENTE