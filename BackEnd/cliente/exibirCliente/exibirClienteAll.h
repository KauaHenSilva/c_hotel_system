#if !defined(EXIBIRCLIENTEALL)
#define EXIBIRCLIENTEALL

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteAll(StDbClientes *cliente, int numClientes){

  Utils.SystemComand.clearTela();
  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n");
    return;
  };

  printf("Todos os Clientes:\n");
  for(int x = 0 ; x < numClientes ; x++)
  {
    printf("Cliente numero [%d]\n", x + 1);
    exibirOnlyCliente(cliente, x);
  }
}

#endif // EXIBIRCLIENTEALL
