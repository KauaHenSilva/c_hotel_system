
#if !defined(VERIFICANDOTIME)
#define VERIFICANDOTIME

#include <time.h>
#include "../../../../../db/model.h"
int verificaConflitoDatas(struct tm inicio1, struct tm fim1, struct tm inicio2, struct tm fim2)
{
  time_t t1 = mktime(&inicio1);
  time_t t2 = mktime(&fim1);
  time_t t3 = mktime(&inicio2);
  time_t t4 = mktime(&fim2);

  return (t1 <= t4) && (t2 >= t3);
}

int verificaConflitoReserva(StDbFluxoFinanceiro *dbFluxoFinanceiro, int qtdFluxo, struct tm newInicio, struct tm newFinal, int idQuarto, StDbQuartos *quarto)
{
  
  for (int i = 0; i < qtdFluxo; i++)
  {
    if(dbFluxoFinanceiro[i].idQuarto == quarto[idQuarto].numero)
      if (verificaConflitoDatas(dbFluxoFinanceiro[i].dataReserva.DataInicial, dbFluxoFinanceiro[i].dataReserva.DataFinal, newInicio, newFinal))
      {
        printf("Ocorreu Um conflito de datas\n");
        return 1; // Há conflito de datas
      }
  }
  return 0;  // Não há conflito de datas
}

#endif // VERIFICANDOTIME
