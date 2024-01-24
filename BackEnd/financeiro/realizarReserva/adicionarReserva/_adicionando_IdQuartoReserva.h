#if !defined(ADICIONANDOIDQUARTO)
#define ADICIONANDOIDQUARTO

#include "../../../../db/model.h"


void adicionandoIdQuarto(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int idQuarto)
{
  dbFluxoFinanceiro[localfn].idQuarto = idQuarto;
} 

#endif // ADICIONANDOIDQuarto