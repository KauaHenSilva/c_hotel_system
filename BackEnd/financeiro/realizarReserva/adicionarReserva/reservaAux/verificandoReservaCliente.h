#if !defined(VERIFICANDORESERVACLIENTE)
#define VERIFICANDORESERVACLIENTE

#include "../../../../../db/model.h"

int verificarReservaCliente(StDbClientes *cliente, StDbControle *controle)
{
  while (1)
  {

    Utils.SystemComand.clearTela();

    printf("Escolha um Cliente:\n\n");

    for (int x = 0; x < *(controle->quantidadeDeCLientes); x++)
      exibirOnlyCliente(cliente, x);

    int idCliente;
    Cliente.getClienteId(cliente, *(controle->quantidadeDeCLientes), &idCliente);

    return idCliente;
  }
}

#endif // VERIFICANDORESERVACliente
