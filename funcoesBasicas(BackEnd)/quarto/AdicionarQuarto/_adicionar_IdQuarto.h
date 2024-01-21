#if !defined(_ADICIONARIDQUARTO)
#define _ADICIONARIDQUARTO

#include "../../../db/model.h"

void adicionarIdQuarto(stDbQuarto *dbQuarto, int numQuartos, int posicaoMemoria)
{
  dbQuarto[posicaoMemoria].numero = numQuartos;
}

#endif // ADICIONARIDQUARTO
