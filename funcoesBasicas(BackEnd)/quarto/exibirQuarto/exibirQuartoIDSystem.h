
#if !defined(EXIBIRQUARTOIDSYSTEM)
#define EXIBIRQUARTOIDSYSTEM

#include "../../../db/model.h"
#include "../../../utils/utilis.h"

#include "./_exibir_StatusDoQuarto.h"
#include "./_exibir_IdDoQuarto.h"
#include "./_exibir_TipoDoQuarto.h"
#include "./_exibir_ValorDoQuarto.h"

#include "./../../../utils/utilis.h"


void exibirQuartoIdSystem(stDbQuarto *quarto, int id){
  
  exibirIdDoQuarto(quarto, id);
  exibirStatusDoQuarto(quarto, id);
  exibirTipoDoQuarto(quarto, id);
  exibirValorDoQuarto(quarto, id);
  printf("\n");
  
}



#endif // EXIBIRQUARTOIDSYSTE
