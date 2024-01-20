#include "../../../db/model.h"
#include "_adicionar_EspacoQuarto.h"

#if !defined(ADICIONARQUARTO)
#define ADICIONARQUARTO

#include "_adicionar_idQuarto.h"
#include "_adicionar_TipoDoQuarto.h"
#include "_adicionar_ValorQuarto.h"
#include "_adicionar_StatusQuarto.h"
#include "./../../../utils/utilis.h"


void adicionarQuarto(stDbQuarto **dbQuartos, int *numQuartos)
{
  adicionarEspacoQuarto(dbQuartos, numQuartos);
  Utils.clearTela();
  adicionarIdQuarto(*dbQuartos, *numQuartos);
  Utils.clearTela();
  adicionarTipoQuarto(*dbQuartos, *numQuartos);
  Utils.clearTela();
  adicionarValorQuarto(*dbQuartos, *numQuartos);
  Utils.clearTela();
  adicionarStatusQuarto(*dbQuartos, *numQuartos);
  Utils.clearTela();
};

#endif // ADICIONARQUARTO
