
#if !defined(EXIBIRQUARTOID)
#define EXIBIRQUARTOID

#include "../../../db/model.h"
#include "../../../utils/utilis.h"

#include "./_exibir_StatusDoQuarto.h"
#include "./_exibir_IdDoQuarto.h"
#include "./_exibir_TipoDoQuarto.h"
#include "./_exibir_ValorDoQuarto.h"

#include "./../../../utils/utilis.h"


void exibirQuartoId(stDbQuarto *quarto, int numQuartos){
  clearTela();

  Utils.ExibirOnly.exibirOnlyIdQuarto(quarto, numQuartos);
  
  int id;
  Utils.Inputs.getQuartoId(quarto, numQuartos, &id);
  exibirIdDoQuarto(quarto, id);
  exibirStatusDoQuarto(quarto, id);
  exibirTipoDoQuarto(quarto, id);
  exibirValorDoQuarto(quarto, id);
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}



#endif // EXIBIRQUARTO
