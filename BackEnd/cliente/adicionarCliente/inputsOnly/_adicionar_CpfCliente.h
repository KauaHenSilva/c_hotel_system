#if !defined(ADDCPFUSER)
#define ADDCPFUSER

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarCpfCliente(StDbClientes *dbCliente, int posicaoMemoria, int numClientes)
{
  int verificacao;
  do
  {
    Utils.SystemComand.clearTela();
    printf("Adicionando Clinte [Cpf]... \n\n");
    Utils.InputsSavin.getCpf(dbCliente[posicaoMemoria].cpf, "Digite o cpf Ex.[123.123.123-00]: ");

    verificacao = 0;
    for(int x  = 0 ; x < numClientes; x++)
    {
      if(x == posicaoMemoria) continue;
      if(!strcmp(dbCliente[x].cpf, dbCliente[posicaoMemoria].cpf))
      {
        verificacao = 1;
        printf("Cpf ja cadastrado, tente novamente...\n");
        Utils.SystemComand.systemPause("Pressione qualquer tecla para continuar...");
        break;
      }
    }
  }while(verificacao);
  printf("Clinte [Cpf] Adicionado... \n");
  
}

#endif // ADDCPFUSER