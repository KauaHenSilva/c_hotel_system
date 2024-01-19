#if !defined(ADICIONARSTATUSQUARTO)
#define ADICIONARSTATUSQUARTO

#include "../../../db/model.h"
void adicionarStatusQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  numQuartos -= 1;
  dbQuarto[numQuartos].statusQuarto = LIVRE;
}

#endif // ADICIONARSTATUSQUARTO
