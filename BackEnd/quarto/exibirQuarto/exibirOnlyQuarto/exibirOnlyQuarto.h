
#if !defined(EXIBIRQUARTOIDSYSTEM)
#define EXIBIRQUARTOIDSYSTEM

#include "../../../../db/model.h"

#include "./_exibir_IdDoQuarto.h"
#include "./_exibir_StatusDoQuarto.h"
#include "./_exibir_TipoDoQuarto.h"
#include "./_exibir_ValorDoQuarto.h"

void exibirOnlyQuarto(StDbQuartos *quarto, int id){
  printf("Dados do Quarto [%d]:\n", id);
  exibirIdDoQuarto(quarto, id);
  exibirStatusDoQuarto(quarto, id);
  exibirTipoDoQuarto(quarto, id);
  exibirValorDoQuarto(quarto, id);
  printf("\n");
}

#endif // EXIBIRQUARTOIDSYSTE