#if !defined(EXIBIRCLIENTERG)
#define EXIBIRCLIENTERG

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteRg(StDbClientes *cliente, int numClientes){

  Utils.SystemComand.clearTela();
  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n");
    return;
  };

  printf("Exibindo todos os quarto que possui Rg...\n\n");

  for(int x = 0 ; x < numClientes ; x++)
  {
    exibirOnlyCliente(cliente, x);
  }

  printf("Todos os Cliente exibidos!\n\n");


  char rg[15];
  Utils.InputsSavin.getRg(rg, "Digite o Rg para buscar o cliente Ex.[123456789]: ");

  int existe = 0;
  for(int x = 0 ; x < numClientes ; x++)
  {
    if(cliente[x].rg == rg){
      existe = 1;
      exibirOnlyCliente(cliente, x);
    }
  }

  if(!existe)
    printf("Nao existe cliente com esse rg\n\n");

}

#endif // EXIBIRCLIENTEID
