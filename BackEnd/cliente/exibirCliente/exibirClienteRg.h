#if !defined(EXIBIRCLIENTEID)
#define EXIBIRCLIENTEID

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteRg(StDbClientes *cliente, int numClientes){

  Utils.SystemComand.clearTela();
  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n");
    return;
  };

  char rg[15];
  Utils.InputsSavin.getRg(rg, "Digite o Rg para buscar o cliente Ex.[123456789]: ");

  for(int x = 0 ; x < numClientes ; x++)
  {
    if(cliente[x].rg == rg){
      exibirOnlyCliente(cliente, x);
    }
  }

  if(!existe)
    printf("Nao existe cliente com esse rg\n");

}

#endif // EXIBIRCLIENTEID
