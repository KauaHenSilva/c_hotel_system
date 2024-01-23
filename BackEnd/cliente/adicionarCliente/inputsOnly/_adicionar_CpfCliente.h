#if !defined(ADDCPFUSER)
#define ADDCPFUSER

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarCpfCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Clinte [Cpf]... \n\n");
  Utils.InputsSavin.getCpf(dbCliente[posicaoMemoria].cpf, "Digite o cpf Ex.[123.123.123-00]: ");
  printf("Clinte [Cpf] Adicionado... \n");
}

#endif // ADDCPFUSER