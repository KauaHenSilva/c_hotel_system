#if !defined(ADDNAMEUSER)
#define ADDNAMEUSER

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarNomeCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.InputsBasic.getString(dbCliente[posicaoMemoria].nome, "Digite o nome:");
}

#endif // ADDNAMEUSER