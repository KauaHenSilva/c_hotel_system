#if !defined(EXIBIRCLIENTEID)
#define EXIBIRCLIENTEID

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteId(StDbClientes *cliente, int numClientes){

  Utils.SystemComand.clearTela();

  printf("Exibindo todos os clientes que possui ID...\n\n");
  for(int x = 0 ; x < numClientes ; x++)
  {
    printf("Cliente numero [%d]\n", x + 1);
    exibirOnlyCliente(cliente, x);
  }

  int id;
  getClienteId(cliente, numClientes, &id);
  if(id == -1){
    printf("Nenhum quarto cadrastrado!\n");
    return;
  };

  printf("O Cliente selecionado foi:\n");
  exibirOnlyCliente(cliente, id);

}

#endif // EXIBIRCLIENTEID
