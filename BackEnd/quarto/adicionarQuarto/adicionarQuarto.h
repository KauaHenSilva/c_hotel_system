
#if !defined(ADICIONARQUARTO)
#define ADICIONARQUARTO

#include "../../../db/model.h"
#include "./../../../utils/utilis.h"
#include "./inputsOnly/_adicionar_EspacoQuarto.h"
#include "./inputsOnly/_adicionar_idQuarto.h"
#include "./inputsOnly/_adicionar_TipoDoQuarto.h"
#include "./inputsOnly/_adicionar_ValorQuarto.h"
#include "./inputsOnly/_adicionar_StatusQuarto.h"


void adicionarQuarto(StDbQuartos **dbQuartos, int *numQuartos, int *idQuarto)
{
  Utils.SystemComand.clearTela();

  adicionarEspacoQuarto(dbQuartos, numQuartos);
  adicionarIdQuarto(*dbQuartos, *numQuartos - 1, idQuarto);
  adicionarTipoQuarto(*dbQuartos, *numQuartos - 1);
  adicionarValorQuarto(*dbQuartos, *numQuartos - 1);
  adicionarStatusQuarto(*dbQuartos, *numQuartos - 1);
  
  Utils.SystemComand.clearTela();


  printf("Quarto adicionado com sucesso!\n");
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");

};

#endif // ADICIONARQUARTO
