#if !defined(EXIBIRQUARTOALL)
#define EXIBIRALLQUARTOALL

#include "../../../db/model.h"
#include "./_get_IdQuarto.h"
#include "./_exibir_StatusDoQuarto.h"
#include "./_exibir_IdDoQuarto.h"
#include "./_exibir_TipoDoQuarto.h"
#include "./_exibir_ValorDoQuarto.h"

void exibirQuartoAll(stDbQuarto *quarto, int numQuartos){
  for(int x = 0 ; x < numQuartos ; x++)
  {
    exibirIdDoQuarto(quarto, x);
    exibirStatusDoQuarto(quarto, x);
    exibirTipoDoQuarto(quarto, x);
    exibirValorDoQuarto(quarto, x);
  }
}

#endif // EXIBIRALLQUARTO
