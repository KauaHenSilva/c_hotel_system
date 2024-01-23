#if !defined(ADICIONARENDERECO)
#define ADICIONARENDERECO


#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarEnderecoCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Clinte [Endereco]... \n");
  Utils.InputsBasic.getString(dbCliente[posicaoMemoria].endereco, "Digite o endereco:");
  printf("Clinte [Endereco] Adicionado... \n");
} 


#endif // ADICIONARENDERECO