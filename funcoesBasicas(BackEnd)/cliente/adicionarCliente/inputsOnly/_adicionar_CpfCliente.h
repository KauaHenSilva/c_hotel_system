#if !defined(ADDCPFUSER)
#define ADDCPFUSER

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adiconarCpfCliente(StDbClintes *dbCliente, int posicaoMemoria)
{
  Utils.InputsSavin.getCpf(dbCliente[posicaoMemoria].cpf, "Digite o cpf Ex.[123.123.123-00]:");
}

#endif // ADDCPFUSER