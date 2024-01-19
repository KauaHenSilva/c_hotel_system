#if !defined(ADICIONARIDQUARTO)
#define ADICIONARIDQUARTO

#include "../../../db/model.h"

void adicionarIdQuarto(stDbQuarto *dbQuarto, int numQuartos)
{
  numQuartos -= 1;
  dbQuarto[numQuartos].numero = numQuartos + 1;
}

#endif // ADICIONARIDQUARTO
