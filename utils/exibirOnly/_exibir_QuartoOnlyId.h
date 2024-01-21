#if !defined(EXIBIRQUARTOONLYID)
#define EXIBIRQUARTOONLYID

#include "../../funcoesBasicas(BackEnd)/quarto/exibirQuarto/_exibir_IdDoQuarto.h"
#include "../../db/model.h"

void exibirQuartoOnlyId(stDbQuarto *quarto,int numQuartos)
{
  printf("Quartos cadastrados:\n");
  for(int x = 0 ; x < numQuartos ; x++)
  {
    exibirIdDoQuarto(quarto, x);
  }
}

#endif // EXIBIRQUARTOONLYID
