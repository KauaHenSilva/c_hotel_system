#if !defined(EXIBIRCLIENTENAME)
#define EXIBIRCLIENTENAME

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteNome(StDbClientes *cliente, int numClientes){

  Utils.SystemComand.clearTela();
  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n");
    return;
  };

  int existe = 0; char nome[100];
  Utils.InputsBasic.getString(nome, "Digite o nome do cliente para busca: ");

  for(int x = 0 ; x < numClientes ; x++)
  {
    if(cliente[x].nome == nome){
      existe = 1;
      exibirOnlyCliente(cliente, x);
    }
  }

  if(!existe)
    printf("Nao existe cliente com esse nome\n");

}

#endif // EXIBIRCLIENTENAME
