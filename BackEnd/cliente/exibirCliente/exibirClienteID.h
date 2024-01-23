#if !defined(EXIBIRCLIENTEID)
#define EXIBIRCLIENTEID

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteId(StDbClientes *cliente, int numClientes){

  Utils.SystemComand.clearTela();
  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  };

  int existe = 0; char rg[15];
  Utils.InputsSavin.getRg(rg, "Digite o Rg para buscar o cliente Ex.[123456789]: ");

  for(int x = 0 ; x < numClientes ; x++)
  {
    if(cliente[x].rg == rg){
      existe = 1;
      exibirOnlyCliente(cliente, x);
    }
  }

  if(!existe)
    printf("Nao existe cliente com esse rg\n");

  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}

#endif // EXIBIRCLIENTEID
