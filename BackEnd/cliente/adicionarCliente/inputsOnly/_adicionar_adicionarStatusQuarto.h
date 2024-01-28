#if !defined(ADDSTATUSQUARTO)
#define ADDSTATUSQUARTO

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarStatusCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  dbCliente[posicaoMemoria].statusCliente = LIVRE;
}

#endif // ADDSTATUSQUARTO