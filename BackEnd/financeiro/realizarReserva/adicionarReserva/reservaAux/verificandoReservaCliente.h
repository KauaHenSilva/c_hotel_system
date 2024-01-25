#if !defined(VERIFICANDORESERVACLIENTE)
#define VERIFICANDORESERVACLIENTE

#include "../../../../../db/model.h"

int verificarReservaCliente(StDbClientes *cliente, int qtdCliente)
{
  while (1)
  {

    Utils.SystemComand.clearTela();

    printf("Escolha um Cliente:\n\n");

    for (int x = 0; x < qtdCliente; x++)
      exibirOnlyCliente(cliente, x);

    int idCliente;
    Cliente.getClienteId(cliente, qtdCliente, &idCliente);

    return idCliente;
  }
}

#endif // VERIFICANDORESERVACliente
