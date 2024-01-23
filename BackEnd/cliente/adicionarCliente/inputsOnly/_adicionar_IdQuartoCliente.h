#if !defined(_ADICIONARIDCLIENTE)
#define _ADICIONARIDCLIENTE

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarIdCliente(StDbClientes *dbCliente, int numCliente, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Clinte [id]... \n");
  dbCliente[posicaoMemoria].idCadrastro = numCliente;
  printf("Clinte [Id] Adicionado... \n");
}

#endif // _ADICIONARIDCLIENTE
