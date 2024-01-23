#if !defined(ADICIONARRGCLIENTE)
#define ADICIONARRGCLIENTE

#include "../../../db/model.h"
#include "../../../utils/utilis.h"

void adiconarRgCliente(StDbClintes *dbCliente, int posicaoMemoria)
{
  Utils.InputsSavin.getRg(dbCliente[posicaoMemoria].rg);
}

#endif // ADICIONARRGCLIENTE
