#if !defined(_ADICIONARIDCLIENTE)
#define _ADICIONARIDCLIENTE

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarIdCliente(StDbClientes *dbCliente, int numCliente, int posicaoMemoria)
{
  dbCliente[posicaoMemoria].idCadrastro = numCliente;
}

#endif // _ADICIONARIDCLIENTE
