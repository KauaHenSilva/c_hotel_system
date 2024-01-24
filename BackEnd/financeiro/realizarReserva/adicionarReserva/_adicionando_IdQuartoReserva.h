#if !defined(ADICIONANDOIDQUARTO)
#define ADICIONANDOIDQUARTO

#include "../../../../db/model.h"


void adicionandoIdQuarto(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int idQuarto, StDbQuartos *quartos)
{
  dbFluxoFinanceiro[localfn].idQuarto = quartos[idQuarto].numero;
} 

#endif // ADICIONANDOIDQuarto