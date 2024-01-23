#if !defined(EXIBIRCLIENTECPF)
#define EXIBIRCLIENTECPF

#include "../../../db/model.h"
#include "../../../utils/utilis.h"
#include "./exibirOnlyCliente/exibirOnlyCliente.h"

void exibirClienteCpf(StDbClintes *cliente, int numClientes){

  Utils.SystemComand.clearTela();
  if(numClientes == 0){
    printf("Nenhum cliente cadrastrado!\n");
    Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
    return;
  };

  int existe = 0; char cpf[15];
  Utils.InputsSavin.getCpf(cpf, "Digite o cpf para buscar o cliente Ex.[123.123.123-00]: ");

  for(int x = 0 ; x < numClientes ; x++)
  {
    if(cliente[x].cpf == cpf){
      existe = 1;
      exibirOnlyCliente(cliente, x);
    }
  }

  if(!existe)
    printf("Nao existe cliente com esse cpf\n");

  Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
}

#endif // EXIBIRCLIENTECPF
