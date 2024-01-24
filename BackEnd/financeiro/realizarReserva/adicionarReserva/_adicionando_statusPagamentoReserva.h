#if !defined(ADICIONANDOSTATUSPAGAMENTORESERVA)
#define ADICIONANDOSTATUSPAGAMENTORESERVA

#include "../../../../db/model.h"


void adicionandoStatusPagamentoReserva(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn)
{
  dbFluxoFinanceiro[localfn].statusPagamento = NAO_PAGO;
} 

#endif // ADICIONANDOSTATUSPAGAMENTORESERVA
