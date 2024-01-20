
#if !defined(EXIBIRQUARTOID)
#define EXIBIRQUARTOID

#include "../../../db/model.h"
#include "../../../utils/_get_IdQuarto.h"

#include "./_exibir_StatusDoQuarto.h"
#include "./_exibir_IdDoQuarto.h"
#include "./_exibir_TipoDoQuarto.h"
#include "./_exibir_ValorDoQuarto.h"


void exibirQuartoId(stDbQuarto *quarto, int numQuartos){
  int id;
  Utils.getQuartoId(quarto, numQuartos, &id);
  exibirIdDoQuarto(quarto, id);
  exibirStatusDoQuarto(quarto, id);
  exibirTipoDoQuarto(quarto, id);
  exibirValorDoQuarto(quarto, id);
}



#endif // EXIBIRQUARTO
