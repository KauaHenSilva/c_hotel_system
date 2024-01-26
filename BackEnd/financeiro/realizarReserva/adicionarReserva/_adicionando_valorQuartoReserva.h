#if !defined(ADICIONANDOVALORDARESERVA)
#define ADICIONANDOVALORDARESERVA

#include "../../../../db/model.h"

double diferencaDatasEmSegundos(struct tm* dataInicial, struct tm* dataFinal)
{
    time_t dataInicialSegundos = mktime(dataInicial);
    time_t dataFinalSegundos = mktime(dataFinal);

    return difftime(dataFinalSegundos, dataInicialSegundos);
}

void adicionandoValorQuarto(StDbFluxoFinanceiro *dbFluxoFinanceiro, int localfn, int localQ, StDbQuartos *quarto)
{
  double diferencaSegundos = diferencaDatasEmSegundos(&(dbFluxoFinanceiro[localfn].dataReserva.DataInicial), &(dbFluxoFinanceiro[localfn].dataReserva.DataFinal));
  int diferencaDias = (int)(diferencaSegundos / (60 * 60 * 24));

  dbFluxoFinanceiro[localfn].valorPagar = quarto[localQ].valorDiaria * (diferencaDias + 1);
} 

#endif // ADICIONANDOVALORDARESERVA
