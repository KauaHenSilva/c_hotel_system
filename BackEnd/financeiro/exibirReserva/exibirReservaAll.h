#if !defined(EXIBIRRESERVAALL)
#define EXIBIRRESERVAALL

#include "../../../db/model.h"
#include "./exibirOnly/exibirOnly.h"

void exibirReservaAll(StDbFluxoFinanceiro *dbFluxoFinanceiro, StDbControle controler)
{
  Utils.SystemComand.clearTela();

  printf("Exibindo todas as reservas...\n\n");

  int existe = 0;
  for(int x = 0 ; x < *(controler.quantidadeDeReserva) ; x++)
  {
    existe = 1;
    exibirOnly(dbFluxoFinanceiro, x);
  }

  if(!existe)
    printf("Nao existe nenhuma reserva!\n\n");

  printf("Todas as reservas foram exibidas!\n");
  
}

#endif // EXIBIRRESERVA
