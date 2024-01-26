#if !defined(ADICIONANDOODIADARESERVA)
#define ADICIONANDOODIADARESERVA

#include "../../../../db/model.h"

void adicionarDiaDaReserva(StDbFluxoFinanceiro *dbReserva, int posicaoMemoria, auxIdUserQuartoTime auxIdUserQuartoTime)
{
  dbReserva[posicaoMemoria].dataReserva.DataInicial = auxIdUserQuartoTime.dataInicial;
  dbReserva[posicaoMemoria].dataReserva.DataFinal = auxIdUserQuartoTime.dataFinal;
}

#endif // ADICIONANDOODIADARESERVA
