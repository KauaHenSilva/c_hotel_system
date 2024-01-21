
#if !defined(ADICIONARQUARTO)
#define ADICIONARQUARTO

#include "../../../db/model.h"
#include "./inputsOnly/_adicionar_EspacoQuarto.h"
#include "./inputsOnly/_adicionar_idQuarto.h"
#include "./inputsOnly/_adicionar_TipoDoQuarto.h"
#include "./inputsOnly/_adicionar_ValorQuarto.h"
#include "./inputsOnly/_adicionar_StatusQuarto.h"
#include "./../../../utils/utilis.h"


void adicionarQuarto(stDbQuarto **dbQuartos, int *numQuartos)
{

  Utils.SystemComand.clearTela();
  adicionarEspacoQuarto(dbQuartos, numQuartos);
  Utils.SystemComand.clearTela();
  adicionarIdQuarto(*dbQuartos, *numQuartos, *numQuartos - 1);
  Utils.SystemComand.clearTela();
  adicionarTipoQuarto(*dbQuartos, *numQuartos - 1);
  Utils.SystemComand.clearTela();
  adicionarValorQuarto(*dbQuartos, *numQuartos - 1);
  Utils.SystemComand.clearTela();
  adicionarStatusQuarto(*dbQuartos, *numQuartos - 1);
  Utils.SystemComand.clearTela();

  printf("Quarto adicionado com sucesso!\n");
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");

};

#endif // ADICIONARQUARTO
