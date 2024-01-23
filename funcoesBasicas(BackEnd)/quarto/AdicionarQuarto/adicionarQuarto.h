
#if !defined(ADICIONARQUARTO)
#define ADICIONARQUARTO

#include "../../../db/model.h"
#include "./../../../utils/utilis.h"
#include "./inputsOnly/_adicionar_EspacoQuarto.h"
#include "./inputsOnly/_adicionar_idQuarto.h"
#include "./inputsOnly/_adicionar_TipoDoQuarto.h"
#include "./inputsOnly/_adicionar_ValorQuarto.h"
#include "./inputsOnly/_adicionar_StatusQuarto.h"


void adicionarQuarto(stDbQuartos **dbQuartos, int *numQuartos)
{

  adicionarEspacoQuarto(dbQuartos, numQuartos);
  adicionarIdQuarto(*dbQuartos, *numQuartos, *numQuartos - 1);
  adicionarTipoQuarto(*dbQuartos, *numQuartos - 1);
  adicionarValorQuarto(*dbQuartos, *numQuartos - 1);
  adicionarStatusQuarto(*dbQuartos, *numQuartos - 1);

  printf("Quarto adicionado com sucesso!\n");
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");

};

#endif // ADICIONARQUARTO
