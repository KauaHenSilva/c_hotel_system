#if !defined(ADICIONANDOODIADARESERVA)
#define ADICIONANDOODIADARESERVA

#include "../../../../db/model.h"

void adicionarDiaDaReserva(StDbFluxoFinanceiro *dbReserva, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  Utils.InputsSavin.getData(&(dbReserva[posicaoMemoria].dataCadrastro.DataInicial), "Data Inicial: ");
  Utils.SystemComand.clearTela();
  Utils.InputsSavin.getData(&(dbReserva[posicaoMemoria].dataCadrastro.DataFinal), "Data Final: ");
}

#endif // ADICIONANDOODIADARESERVA
