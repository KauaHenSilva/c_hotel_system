#if !defined(ADICIONANDOIDCLIENTE)
#define ADICIONANDOIDCLIENTE

#include "../../../../db/model.h"


void adicionandoIdCliente(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int idCliente, StDbClientes *cliente)
{
  dbFluxoFinanceiro[localfn].idCliente = cliente[idCliente].idCadrastro;
} 

#endif // ADICIONANDOIDCLIENTE