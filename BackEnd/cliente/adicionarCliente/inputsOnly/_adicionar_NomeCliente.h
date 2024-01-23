#if !defined(ADDNAMEUSER)
#define ADDNAMEUSER

#include "../../../../db/model.h"
#include "../../../../utils/utilis.h"

void adicionarNomeCliente(StDbClientes *dbCliente, int posicaoMemoria)
{
  Utils.SystemComand.clearTela();
  printf("Adicionando Clinte [Nome]... \n");
  Utils.InputsBasic.getString(dbCliente[posicaoMemoria].nome, "Digite o nome: ");
  printf("Clinte [Nome] Adicionado... \n");
}

#endif // ADDNAMEUSER