#if !defined(ADICIONANDOCPIF)
#define ADICIONANDOCPIF

#include "../../../../db/model.h"

void adicionandoCpfCliente(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int localUs, StDbClientes *cliente)
{
  strcpy(dbFluxoFinanceiro[localfn].cpfCliente, cliente[localUs].cpf);
}

#endif // ADICIONANDOCPIF
