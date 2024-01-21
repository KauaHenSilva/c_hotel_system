
#if !defined(EXIBIRQUARTOIDSYSTEM)
#define EXIBIRQUARTOIDSYSTEM

#include "../../db/model.h"

#include "./exibirOnlyQuarto/_exibir_IdDoQuarto.h"
#include "./exibirOnlyQuarto/_exibir_StatusDoQuarto.h"
#include "./exibirOnlyQuarto/_exibir_TipoDoQuarto.h"
#include "./exibirOnlyQuarto/_exibir_ValorDoQuarto.h"

void exibirQuartoIdSystem(stDbQuarto *quarto, int id){
  exibirIdDoQuarto(quarto, id);
  exibirStatusDoQuarto(quarto, id);
  exibirTipoDoQuarto(quarto, id);
  exibirValorDoQuarto(quarto, id);
  printf("\n");
}

#endif // EXIBIRQUARTOIDSYSTE
