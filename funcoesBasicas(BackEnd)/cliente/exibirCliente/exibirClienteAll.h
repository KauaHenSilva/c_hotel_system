#if !defined(EXIBIRCLIENTEALL)
#define EXIBIRCLIENTEALL

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteAll(StDbClintes *cliente, int numClientes){

  Utils.SystemComand.clearTela();
  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  };

  for(int x = 0 ; x < numClientes ; x++)
  {
    exibirOnlyCliente(cliente, x);
  }
  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}

#endif // EXIBIRCLIENTEALL
