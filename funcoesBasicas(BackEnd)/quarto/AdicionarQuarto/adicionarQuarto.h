#include "../../../db/model.h"
#include "_adicionarEspacoQuarto.h"
#include "_adicionaridQuarto.h"
#include "_adicionarTipoDoQuarto.h"
#include "_adicionarValorQuarto.h"
#include "_adicionarStatusQuarto.h"


void adicionarQuarto(stDbQuarto **dbQuartos, int *numQuartos)
{
  adicionarEspacoQuarto(dbQuartos, numQuartos);
  adicionarIdQuarto(*dbQuartos, *numQuartos);
  adicionarTipoQuarto(*dbQuartos, *numQuartos);
  adicionarValorQuarto(*dbQuartos, *numQuartos);
  adicionarStatusQuarto(*dbQuartos, *numQuartos);
};
