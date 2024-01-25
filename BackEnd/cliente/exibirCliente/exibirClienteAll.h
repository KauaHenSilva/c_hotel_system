#if !defined(EXIBIRCLIENTEALL)
#define EXIBIRCLIENTEALL

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteAll(StDbClientes *cliente, int numClientes){

  Utils.SystemComand.clearTela();

  printf("Exibindo todos os Clientes...\n\n");

  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n\n");
    return;
  };

  for(int x = 0 ; x < numClientes ; x++)
  {
    exibirOnlyCliente(cliente, x);
  }

  printf("Todos os Clientes exibidos!\n\n");
}

#endif // EXIBIRCLIENTEALL
