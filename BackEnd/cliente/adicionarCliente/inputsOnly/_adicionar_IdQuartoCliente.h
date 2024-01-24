#if !defined(_ADICIONARIDCLIENTE)
#define _ADICIONARIDCLIENTE

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarIdCliente(StDbClientes *dbCliente, int posicaoMemoria, int *idCliente)
{
  dbCliente[posicaoMemoria].idCadrastro = ++(*idCliente);
}

#endif // _ADICIONARIDCLIENTE
