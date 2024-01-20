#include "../../../db/model.h"
#include "_adicionar_EspacoQuarto.h"

#if !defined(ADICIONARQUARTO)
#define ADICIONARQUARTO

#include "_adicionar_idQuarto.h"
#include "_adicionar_TipoDoQuarto.h"
#include "_adicionar_ValorQuarto.h"
#include "_adicionar_StatusQuarto.h"


void adicionarQuarto(stDbQuarto **dbQuartos, int *numQuartos)
{
  adicionarEspacoQuarto(dbQuartos, numQuartos);
  adicionarIdQuarto(*dbQuartos, *numQuartos);
  adicionarTipoQuarto(*dbQuartos, *numQuartos);
  adicionarValorQuarto(*dbQuartos, *numQuartos);
  adicionarStatusQuarto(*dbQuartos, *numQuartos);
};

#endif // ADICIONARQUARTO
